#include <stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the value of Three Numbers\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if (n1>n2 && n1>n3){
		printf("%d is the Greatest",n1);
	}
	else if (n2>n1 && n2>n3){
		printf("%d is the Greatest",n2);
	}
	else {
	    printf("%d is the Greatest",n3);
	}
    return 0;
}
