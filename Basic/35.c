#include<stdio.h>                                                                              
#include<stdint.h>                                                                             

int main()                                                                                     
{                                                                                              
        struct sanjay                                                                          
        {                                                                                      
                int a;                                                                         
                char danush[50];                                                               
                int age;                                                                       
        }; // <-- Added missing semicolon here
                                                                                               
        struct sanjay hello1;  // <-- Added 'struct' keyword
        struct sanjay *p=&hello1; // <-- Added 'struct' keyword
        printf("%p\n",(void*)p); // Added \n for cleaner output
        
        return 0; // Good practice for main()
}

