#include <stdio.h>
int main(){
	int num1 , num2;
	int sum, multi,diff,div , mod ;
	printf("Enter number 1");
	scanf ("%d",&num1);
	printf("Enter number 2");
	scanf ("%d",& num2);
	sum=num1+num2;
	diff=num1-num2;
	multi=num1*num2;
	div=num1/num2;
	mod=num1%num2;
    printf("sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("multi=%d\n",multi);
    printf("div=%d\n",div);
    printf("mod=%d\n",mod);
    return 0;	
}

