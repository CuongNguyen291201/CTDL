#include<stdio.h>
#include<math.h>

int res(int n){
  int sum = 0;
  while(n>0){
    sum+=n%10;
    n/=10;
  }
  return sum;
}

int main(){
  int n,k; scanf("%d%d", &n,&k);
  if (res(n)>res(k)) printf("%d %d", k, n);
  else printf("%d %d", n,k);
  return 0;
}