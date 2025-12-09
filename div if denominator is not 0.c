#include <stdio.h>
int main()
{
	float n,d,div;
	printf("Enter n and d\n");
	scanf("%f%f",&n,&d);
	if (d!=0)
	{
	    div=n/d;
	    printf("Division=%.2f",div);
	}
	else 
	{
		printf("You have Entered Zero as denominator, try with another denominator");
	}
	return 0;
}
