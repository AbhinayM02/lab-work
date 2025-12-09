#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
	int k=0;
	char in[50];
	printf("Enter The String ");                        
	scanf("%s",&in);
	int length= strlen(in);
	for(i=0; i<length; i++){
		j=length-i-1;
		if(in[i]==in[j])
			k++;
	}
	if (k==length)
		printf("The String Is A Palindrome.");
	else
		printf("The String Is Not A Palindrome.");
	return 0;
}
