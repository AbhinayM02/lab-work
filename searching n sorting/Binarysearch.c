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
int binary(int a[],int n, int s){
	int l=0,h=n-1;
	int mid= (l+h)/2;
	while(l<=h){
		if(s==mid)
			return mid;
		else if(s<mid)
			h=mid-1;
		else
			l=mid+1;
	}
	if(l>h)
		return -1;
}
int main(){
	int a[50],i,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the Elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the Element to be searched\n");
	int s;
	scanf("%d",&s);
	selection_sort(a,n);
	if(binary(a,n,s) == -1)
		printf("Element Not Found");
	else
		printf("position of %d is %d",s,binary(a,n,s));
	return 0;
}
