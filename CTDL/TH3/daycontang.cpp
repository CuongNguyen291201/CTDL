#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int a[1001], b[1001], res=0;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++){
    b[i]=1;
    for(int j=0;j<=i;j++){
      if (a[j]<a[i]){
        b[i]=max(b[i], b[j]+1);
      }
    }
    res = max(res, b[i]);
  }

  cout<<res<<endl;
}
