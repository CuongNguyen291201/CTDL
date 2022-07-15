#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, a[10001]; cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a, a+n);
  int m1 = a[0] * a[1];
  int m2 = a[n-1] * a[n-2];
  int m3 = a[n-1] * a[n-2] * a[n-3];
  int m4 = a[0] * a[1] * a[n-1];

  cout<<max(max(m1,m2), max(m3,m4));


  return 0;
}