
#include <stdio.h>

int main() {
    int num;
    long long fact=1;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("the factorial of %d=%lld\n",num,fact);
    return 0;
}