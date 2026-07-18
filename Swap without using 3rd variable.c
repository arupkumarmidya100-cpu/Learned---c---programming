#include<stdio.h>
int main ()
{
    int a,b ;
    printf ("Enter value for a :");
    scanf("%d", & a);
    printf("Enter value for b :");
    scanf ("%d", & b);
    printf("Before swapping :\n");
    printf("Value of a :%d ,b:%d\n", a,b);
    //without varriable
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n After swapping :\n");
    printf("Value of a:%d\n , b:%d\n" , a,b);
    return 0;
}