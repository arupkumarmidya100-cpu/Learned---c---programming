#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value of a :", a);
    scanf("%d",&a);
    printf("Enter value of b :", b);
    scanf("%d",&b);
    printf("Enter value of c :", c);
    scanf("%d",&c);
     int Average =((a+b+c)/3);
    printf("Average of 3 number is %d", Average);
    return 0;
}