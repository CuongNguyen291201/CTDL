#include<bits/stdc++.h>
using namespace std;S

int n, a[10000], b[10000], check[10000], count=0;

void result(int k) {
  cout<<k<<endl;
  for(int i=1;i<=n;i++) cout<<a[i]<<" ";
  for(int i=1;i<=n;i++){
    
    if (a[i]==b[i]) {
    
    }
  }
}

void Try(int i){
  for(int j=1;j<=n;j++){
    if (check[j]==0){
      a[i]=j;
      check[j]=1;
      if (i==n) result(i);
      else Try(i+1);
      check[j]=0;
    }
  }
}

int main() {
  int t; cin>>t;
  while(t--){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>b[i];
    Try(1);
  }
  return 0;
}