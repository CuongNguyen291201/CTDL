#include<stdio.h>
#include<string.h>

int main() {
	int t; scanf("%d", &t);
	while(t--) {
		
		char s[10]; scanf("%s", &s);
		int chan=0, le=0;
		
		for(int i=0;i<strlen(s);i++){
			if ((int)s[i] % 2 == 0) chan++;
			if ((int)s[i] % 2 != 0) le++;
		}
	
		printf("%d %d\n", le, chan);
	
	}
	
	return 0;
}