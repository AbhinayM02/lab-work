#include <stdio.h>
int mul(int a, int b){
	if(b<0)
		return -1*mul(a,-b);
		
	else if(a<0)
		return -1*mul(-a,b);
	else if(b==0)
		return 0;
	else
		return a+mul(a,b-1);
}
int main(){
	int a,b;
	printf("a*b Enter a and b\n");
	scanf("%d%d",&a,&b);
	printf("%d*%d is %d",a,b,mul(a,b));
	return 0;
}
