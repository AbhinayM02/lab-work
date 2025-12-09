#include <stdio.h>
void selection_sort(int a[],int n){
	int i,j,temp,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		if(i!=min){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
int main(){
	int a[50],i,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the Elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
	printf("Sorted Array\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
