#include<stdio.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[18]; scanf("%s", &s);
		int check=1;
		for(int i=1;i<=strlen(s)/2;i++) {
			if (s[i]!=s[strlen(s)-i]) {
				check=0; break;
			}
		}
		if (check==0) printf("NO\n");
//		else if (check == 1 && ((s[0]-'0')*2!=(s[strlen(s)-1]-'0') || (s[0]-'0')/2!=(s[strlen(s)-1]-'0') )) printf("NO\n");
//		else printf("YES\n");
	}
	return 0;
}