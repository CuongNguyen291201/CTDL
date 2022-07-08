#include<stdio.h>
#include<string.h>

void tong(char s[10]) {
  int sum = 0;
  for(int i=0;i<strlen(s);i++){
     sum += (int)(s[i]-'0');
  }
   if (sum % 10 == 0) printf("%s\n", "YES");
   else printf("%s\n", "NO");
}

int main() {
  int t; scanf("%d", &t);
  while(t--){
    char s[10]; scanf("%s", &s);
    tong(s);
  }

  return 0;
}