#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter the firt number (a):");
    scanf("%d",&a);
    printf("Enter the second number (b):");
    scanf("%d",&b);
    printf("Enter the third number (c):");
    scanf("%d",&c);
    if((a>=b)&&(a>=c))
    {
        printf("%d is the largest number.\n",a);
    }
          else if((b>=a)&&(b>=c))
        {
        printf("%d is the largest number.\n",b);
        }
        else {
            printf("%d is the largest number.\n",c);
        }
        return 0;
    
}