#include <stdio.h>
int main()
{
	int i=1,n,a;
	printf("Enter the Number\n");
	scanf("%d",&n);
	while (n!=0){
		a=a+ (n%10)*i;
		n=n/10;
		i=i*2;	
	}
	printf("%d",a);
	return 0;
}
