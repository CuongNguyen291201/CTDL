#include<stdio.h>
#include<string.h>

int check(char s[]){
	int l=0,r=strlen(s)-1;
	while(l<r){
		int x=s[l]-'0';
		if (x%2==1) return 0;
		if (s[l]!=s[r]) return 0;
		l++;r--;
	}
	return 1;
}

int main(){
	int n; scanf("%d", &n);
	while(n--){
		char s[1000]; scanf("%s", &s);
		if (check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}