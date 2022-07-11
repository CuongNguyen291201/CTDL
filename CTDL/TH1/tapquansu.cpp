#include<bits/stdc++.h>
using namespace std;

int n,k,a[10000],b[1000];

void result(){
  int t=k;
  for(int i=1;i<=k;i++) {
    cin>>a[i];
    b[i]=a[i];
  }

  while(a[t]==n-k+t && t>0) t--;
  if (t==0){
    cout<<k<<endl;
  } else {
    a[t]++;
    for(int i=t+1;i<=k;i++) a[i]=a[i-1]+1;
    int count=0;
    for(int i=1;i<=k;i++){
      for(int j=1;j<=k;j++) {
        if (a[i]==b[j]) {
          count++;
          break;
        }
      }
    }
    cout<<k-count<<endl;
  }

}

int main() {
  int t; cin>>t;
  while(t--){
    cin>>n>>k;
    result();
  }
  return 0;;
}