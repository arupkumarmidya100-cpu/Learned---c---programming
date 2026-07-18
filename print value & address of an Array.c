#include<stdio.h>
int main()
{
    int a=9;
    int *ptr =&a ;
    printf("'Value of a is %d\n",a);
    printf("Address of a is %x\n",&a);
    printf("Address of p is %d\n",*ptr);
    return 0;
}