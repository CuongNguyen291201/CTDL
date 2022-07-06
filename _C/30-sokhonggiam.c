#include<stdio.h>
#include<string.h>

int main() {
	int t; scanf("%d", &t);
	
	while(t--) {
		char s[20]; scanf("%s", &s);
		
		int r = 1;
	
		for(int i=1;i<strlen(s);i++) {
			if ((int)s[i] < (int)s[i-1]) {
				r = 0;
				break;
			}
		}
		
		printf("%s\n", r == 1 ? "YES" : "NO");
		
	}
	
	return 0;
}