#include<bits/stdc++.h>
using namespace std;

int n,k, a[10000];

void result(){
  for(int i=1;i<=k;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}

void Try(int i){
  for(int j=n-k+i;j>0;j--){
    if (j>a[i-1]){
      a[i] = j;
      if (i==k) result();
      else Try(i+1);
    }
  }
}

int main(){
  int t; cin>>t;
  while(t--){
    cin>>n>>k;
    Try(1);
  }
  return 0;
}