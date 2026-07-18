#include <stdio.h>
int main()
{
	int i, n ,sum=0;
	printf ("Enter a number: ");
	scanf("%d",&n);
     for (i=1;i<=n;i++)
 	{
	 sum+=i;
    }
	 printf ("The sum of numners from 1 to %d is %d\n",n,sum);

		return 0;
		
}