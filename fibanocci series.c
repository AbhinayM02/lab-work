#include<stdio.h>
int main(){
	int fir=0,sec=1,thir,i,n;
	printf("Enter The No. Of Digits ");
	scanf("%d",&n);
	printf("%d %d ",fir,sec);
	for (i=1;i<=n-2;i++){
		thir=fir+sec;
		printf("%d ",thir);
		fir=sec;
		sec=thir;
	}
	return 0;
}
