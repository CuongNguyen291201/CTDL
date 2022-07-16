#include<bits/stdc++.h>
using namespace std;

struct work {
  int s,f;
};

work a[1002];

bool compare(work a, work b){
  return a.f < b.f;
}

void result(){
  long long n; int res=1, tmp=0; cin>>n;
  for(int i=0;i<n;i++) cin>>a[i].s;
  for(int i=0;i<n;i++) cin>>a[i].f;


  sort(a, a+n, compare);
  
  for(int i=1;i<n;i++){
    if (a[i].s >= a[tmp].f) {
      res++;
      tmp = i;
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