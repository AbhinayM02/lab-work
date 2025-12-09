#include <stdio.h>
int main(){
	int sum=0;
	int n,rem,m;
	printf("ENter the no.\n");
	scanf("%d",&n);
	m=n;
	while(n!=0){
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	if(sum==m)
		printf("Palindrome");
	else
		printf("Not A Palindrome");
	return 0;
}
