#include <stdio.h>
#include <math.h>
int main()
{
	int x,p,r;
	printf("Enter the base number and exponent\n");
	scanf("%d%d",&x,&p);
	r=pow(x,p);
	printf("%d",r);
	return 0;
}
