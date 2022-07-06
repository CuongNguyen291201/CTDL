#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	char s[10], r[10]; scanf("%s", s);
	char tmp = s[0];
	s[0] = s[strlen(s)-1];
	s[strlen(s)-1] = tmp;
	
	
	if (s[0] == '0') {
		for(int i=1;i<=strlen(s)-1;i++){
			printf("%c", s[i]);
		}
	
	} else {
		printf("%s", s);
	}
	return 0;
	
}