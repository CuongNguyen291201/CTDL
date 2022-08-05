#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s1[20], s2[20];
		char s3[20], s4[20];
		scanf("%s%s", s1, s2);
		for(int i=0;i<strlen(s1);i++){
			if (s1[i]=='5') s1[i]='6';
			if (s1[i]=='6') {
				s3[i] = '5';
			} else {
				s3[i]=s1[i];
			}
		}
		for(int i=0;i<strlen(s2);i++){
			if (s2[i]=='5') s2[i]='6';
			if (s2[i]=='6') {
				s4[i]='5';		
			} else {
				s4[i]=s2[i];
			}
		}
		
		
		long long a= atoll(s1), b=atoll(s2), c=atoll(s3), d=atoll(s4);
		
		printf("%lld %lld\n", c+d, a+b);
		
	}
	return 0;
}
