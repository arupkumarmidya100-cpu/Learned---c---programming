#include <stdio.h>
int main ()
{
    int temparature;
    int kelvin;
    printf("Enter the temparature in celsius : ");
    scanf ("%d",&temparature);
    kelvin=temparature+273;
    printf("the temparature covert in kelvin is : %d kelvin\n", kelvin);
    return 0;
}