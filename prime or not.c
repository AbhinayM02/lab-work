#include <stdio.h>
int main()
{
	int cnt=0,n,i;
	printf("Enter The Number ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
			cnt++;
	}
	if (cnt<=2)
		printf("Prime Number ");
	else
		printf("Not a Prime Number");
	return 0;
}
