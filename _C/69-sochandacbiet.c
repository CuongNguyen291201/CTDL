#include<stdio.h>
#include<string.h>

int check(long long n){
  int sum = 0;
  while(n>0){
    sum+=n%10;
    n/=10;
  }
  return sum;
}

int main(){
  int t; scanf("%d", &t);
  while(t--){
    long long n; scanf("%lld", &n);
    if (n%2!=0) printf("NO\n");
    else {
      if (check(n)%2==0) printf("YES\n");
      else printf("NO\n");
    }
  }
  return 0;
}