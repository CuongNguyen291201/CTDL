#include<stdio.h>
#include<math.h>

int ucln(long long a, long long b){
  if (b==0) return a;
  ucln(b, a%b);
}

int main(){
  int t; scanf("%d", &t);
  while(t--){
    long long n,k; scanf("%lld%lld", &n, &k);
    printf("%lld %lld\n", n*k/ucln(n,k), ucln(n,k));
  }
  return 0;
}

// void result() {
//   int a[10001], b[10001], n; scanf("%d", &n);
//   for(int i=1;i<=n;i++) {
//     scanf("%d", &a[i]); b[i] = a[i];
//   }

//   for(int i=1;i<n;i++){
//     for(int j=i+1;j<=n;j++){
//       if (a[i] > a[j]) {
//         int tmp = a[i];
//         a[i] = a[j]; a[j] = tmp;
//       }
//     }
//   }

//   for(int i=1;i<=n;i++){
//     if (b[i] == a[n]) printf("%d ", i);
//   }
//   printf("\n"); 
// }

// int main(){
//   int t; scanf("%d", &t);
//   while(t--){
//     result();
//   }
//   return 0;
// }

