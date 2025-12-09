#include <stdio.h>
int main(){
	int a[50][50],b[50][50],c[50][50];
	int i,j,k;
	printf("Enter the Matrix A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("a[%d][%d]= ",i+1,j+1);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Enter Matrix B\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("b[%d][%d]= ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=0;
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
