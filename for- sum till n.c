
#include <stdio.h>
int main()
{
	int i,sum=0,n;
	printf("Enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("the sum of numbers till %d is %d",n,sum);
	return 0;
}
