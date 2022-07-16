#include<bits/stdc++.h>
using namespace std;

void result(){
  int n; cin>>n;
  priority_queue<int, vector<int>, greater<int> > p;
  for(int i=0;i<n;i++){
    int k; cin>>k; p.push(k);
  }
  long long kq=0;
  while(p.size()>=2){
    int min1 = p.top(); p.pop();
    int min2 = p.top(); p.pop();
    kq += (min1+min2);
    if (p.size()==0) break;
    p.push((min1+min2));
  }
  cout<<kq<<endl;
}

int main(){
  int t; cin>>t;
  while(t--){
    result();
  }
  return 0;
}
