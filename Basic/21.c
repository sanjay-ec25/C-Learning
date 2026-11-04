#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main()
{
        int d,m,y;
        printf("dd mm yyyy: ");
        scanf("%d %d %d",&d,&m,&y);

        typedef union
        {
                uint16_t value;
                struct
                {
                        uint16_t day:5;
                        uint16_t month:4;
                        uint16_t year:7;
                }hello;
        }hello1;

        hello1 sanjay;

        hello1 *ptr=&sanjay;

        ptr->hello.day=d;
        ptr->hello.month=m;
        ptr->hello.year=(y-2000);

        printf("Size: %lu\n",sizeof(hello1));
        printf("Decimal: %u\n",ptr->value);
        printf("Hex: 0x%X\n",ptr->value);
        printf("Date: %02d/%02d/%d\n",ptr->hello.day,ptr->hello.month,ptr->hello.year+2000);

        return 0;}
