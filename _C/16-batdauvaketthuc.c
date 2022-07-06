#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	int t; scanf("%d", &t);
	while(t--){
		char s[10];
		scanf("%s", s);
		int size = strlen(s);
		char a = s[0];
		char b = s[size-1];
		
		if (a == b) {
			printf("%s\n", "YES");
		} else {
			printf("%s\n", "NO");
		}
		
//		printf("%c", s[strlen(s)-1]);
		
//		for(int i=0;i<=strlen(s);i++){
//			printf("%c\n", s[i]);
//		}
		
	}
	
	return 0;
}