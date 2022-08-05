#include<stdio.h>
#include<string.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[19]; scanf("%s", &s);
		int check=0, count=0;
		for(int i=0;i<strlen(s);i++){
			if (s[i]=='0') count++;
			if (s[i]=='8' || s[i]=='9') s[i]='0';
			else if (s[i]!='0' && s[i]!='1' && s[i]!='8' && s[i]!='9') {
				check=1;
				break;
			}
		}
		if (check==1 || count == strlen(s)-1) printf("INVALID\n");
		else {
			long long sum = 0;
			for(int i=0;i<strlen(s);i++) sum = sum*10 + (s[i]-'0');
			printf("%lld\n", sum);		
		}	
	}
	return 0;
}