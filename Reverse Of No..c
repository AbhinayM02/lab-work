#include <stdio.h>
int main(){
	int sum=0;
	int n,rem;
	printf("ENter the no.\n");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		if (rem==0)
			printf("0");
		sum=(sum*10)+rem;
		n=n/10;
	}
	
	printf("%d",sum);
	return 0;
}
