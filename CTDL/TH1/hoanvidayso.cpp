#include<bits/stdc++.h>
using namespace std;

int n, a[9], b[9], check[10000];

void result(){
  for(int i=1;i<=n;i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;
}

void Try(int i){
  for(int j=0;j<n;j++){
    if (check[j]==0) {
      b[i]=a[j];
      check[j]=1;
      if (i==n) result();
      else Try(i+1);
      check[j]=0;
    }
  }
}

int main() {
  cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a, a+n);
  Try(1);
  return 0;
}