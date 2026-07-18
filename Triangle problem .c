#include <stdio.h>
int main(){
	int a,b,c;
	printf("Enter three sides of triangle:");
	scanf("%d %d %d", &a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		if (a==b && b==c){
			printf ("This is an Equilateral triangle \n ");}
			else if ( a==b || b==c|| c==a){
				printf ("This is an Isosceles Triangle \n");}
				else {
					printf ("This is a scalene Triangle \n");}
					 }else {
						printf ("This is a invalid triangle \n");
						}
						return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
