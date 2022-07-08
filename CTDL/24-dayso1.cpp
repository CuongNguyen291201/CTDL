#include<bits/stdc++.h>
using namespace std;

int n;
vector <int> a;
vector <vector<int>> r;

// void result(){
//   cout<<"[";
//   for(int i=0;i<a.size()-1;i++) cout<<a[i]<<" ";
//   cout<<a[a.size()-1]<<"]"<<endl;
// }

// void check() {
//   result();
//   while(a.size()>1){
//     for(int i=0;i<a.size()-1;i++) a[i] += a[i+1];
//     a.pop_back();
//     result();
//   }
// }


void check() {
  while(a.size()>1){
    for(int i=0;i<a.size()-1;i++) a[i] += a[i+1];
    a.pop_back();
    r.push_back(a);
  }

  for(int i=r.size()-1;i>=0;i--){
    cout<<"[";
    for(int j=0;j<r[i].size()-1;j++) cout<<r[i][j]<<" ";
    cout<<r[i].back()<<"]"<<" ";
  }
  cout<<endl;
}

int main() {
  int t; cin>>t;
  while(t--){
    cin>>n; a.resize(n);
    for(int i=0;i<n;i++) cin>>a[i];
    r.push_back(a);
    check();
  }
  return 0;
}