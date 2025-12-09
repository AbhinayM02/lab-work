#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int words,alpha=0,digit,line,other,l,i=0;
	printf("Enter the String ");
	scanf("%[^.]s",s);
	l=strlen(s);
	strlwr(s);
	for(i=0;i<l;i++){
		if (s[i]>='a'&&s[i]<='z')
			alpha++;
		else if(s[i]==' '||s[i]=='\t')
			words++;
		else if(s[i]>='0'&&s[i]<='9')
			digit++;
		else if(s[i]=='\n')
			line++;
		else
			other++;
	}
	printf("alpha=%d,words=%d,digits=%d,lines=%d,other char=%d",alpha,words+1,digit,line,other);
	return 0;
}
