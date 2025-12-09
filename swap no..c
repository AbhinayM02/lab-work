#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	a+=b;
	b=a-b;
	a-=b;
	printf("The swapped vales are a=%d,b=%d",a,b);
	return 0;
}
