#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

typedef union
{
        uint8_t value;
        struct
        {
                uint8_t passed:1;
                uint8_t hostel:1;
                uint8_t scholar:1;
                uint8_t year:2;
                uint8_t unused:3;
        }bits;
}Status;

typedef struct
{
        int roll;
        Status st;
}Student;

int main()
{
        int n,i;
        int p,h,sc,yr;
        int passed=0,hs=0;

        scanf("%d",&n);

        Student *s=(Student *)malloc(n*sizeof(Student));
        if(s==NULL)
        {
                printf("Memory allocation failed\n");
                return 1;
        }

        for(i=0;i<n;i++)
        {
                s[i].st.value=0;                 // clear all bits first
                scanf("%d %d %d %d %d",&s[i].roll,&p,&h,&sc,&yr);

                s[i].st.bits.passed=p;
                s[i].st.bits.hostel=h;
                s[i].st.bits.scholar=sc;
                s[i].st.bits.year=yr;
        }

        printf("Size of Status: %zu\n",sizeof(Status));
        printf("Size of Student: %zu\n",sizeof(Student));
        printf("Roll  Passed  Hostel  Scholar  Year  Byte\n");

        for(i=0;i<n;i++)
        {
                Student *ptr=s+i;
                printf("%-5d %-7d %-7d %-8d %-5d 0x%02X\n",
                        ptr->roll,
                        ptr->st.bits.passed,
                        ptr->st.bits.hostel,
                        ptr->st.bits.scholar,
                        ptr->st.bits.year,
                        ptr->st.value);

                if(ptr->st.bits.passed==1)
                        passed++;
                if(ptr->st.bits.hostel==1 && ptr->st.bits.scholar==1)
                        hs++;
        }

        printf("Passed: %d\n",passed);
        printf("Hostel scholars: %d\n",hs);

        free(s);
        return 0;
}
