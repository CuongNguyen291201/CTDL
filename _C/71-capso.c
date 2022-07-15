#include<stdio.h>

int ucln(long long a, long long b) {
  if (b==0) return a;
  ucln(b, a%b);
}

int main(){
  int t; scanf("%d",&t);
  while(t--){
    long long a,b,c,d; scanf("%lld%lld%lld%lld",&a, &b,&c,&d);
    if (ucln(a,b) == ucln(c,d)) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}