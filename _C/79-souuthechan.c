#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[19]; scanf("%s", s);
		int l=0,c=0;
		for(int i=0;i<strlen(s);i++){
			if ((int)s[i] % 2 ==0) c++;
			else l++;
		}
		if (c>l&&(int)s[0] % 2==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}