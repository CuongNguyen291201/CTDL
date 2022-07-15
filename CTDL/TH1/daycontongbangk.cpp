#include<bits/stdc++.h>
using namespace std;

int n,k,a[11],b[11],check,sum;

void result(int c) {
  cout<<"[";
  for(int i=1;i<c-1;i++){
    cout<<b[i]<<" ";
  }
  cout<<b[c-1]<<"] ";
}

void Try(int i, int sum, int current){
  if (sum==k) {
    result(i);
    check=1;
    return;
  }
  for(int j=current;j<=n;j++){
    sum += a[j];
    b[i] = a[j];
    if (sum<=k) Try(i+1, sum, j+1);
    sum -= a[j];
  }
}

void init(){
  cin>>n>>k; check=0;
  for(int i=1;i<=n;i++) cin>>a[i];
  sort(a+1, a+n+1);

  Try(1,0,1);

  if (check==0) cout<<-1;
  cout<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    init();
  }
  return 0;

}