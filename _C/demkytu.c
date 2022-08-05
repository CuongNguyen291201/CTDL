#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	char s[10000]; gets(s);
	int a=0,b=0;
	for(int i=0;i<strlen(s);i++){
		if (isalpha(s[i])) a++;
		else if (isdigit(s[i])) b++;
	}
	
	printf("%d %d %d", a, b, strlen(s)-a-b);
	return 0;
}