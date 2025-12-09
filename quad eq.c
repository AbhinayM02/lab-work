#include <stdio.h>
#include <math.h>
int main(){
	printf("Eq: ax² + bx +c \n");
	int a,b,c;
	printf("Enter a b c\n");
	scanf("%d%d%d",&a,&b,&c);
	float r1,r2;
	r1= (-b+ pow((b*b)-(4*a*c),0.5))/(2*a);
	r2= (-b - pow(((b*b)-(4*a*c)),0.5))/(2*a);
	printf("Roots are %f and %f ",r1,r2);
	return 0;
}
