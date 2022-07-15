#include<bits/stdc++.h>
using namespace std;

void result(){
  int n; cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  int res=-1e9+7,tmp=0;
  for(int i=0;i<n;i++){
    tmp=0;
    for(int j=i;j<n;j++){
      tmp+=a[j];
      if(tmp<0)break;
      else res=max(res,tmp);
    }
  }
  cout<<res<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    result();
  }
  return 0;
}