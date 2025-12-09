
#include <stdio.h>
 int add(int a,int b)
 {
 	int sum=0;
 	printf("Enter the numbers ");
 	scanf("%d%d",&a,&b);
 	sum = a+b;
 	printf("The sum is %d",sum);
 }
 
 int main()
 {
 	add(5,9);
 	return 0;
 }
