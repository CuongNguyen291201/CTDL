#include<bits/stdc++.h>
using namespace std;

int a[1001][1001];

int result(string s1, string s2){
  memset(a, 0, sizeof(a));
  for(int i=1;i<=s1.length();i++) {
    for(int j=1;j<=s2.length();j++){
      if (s1[i-1] == s2[j-1]) a[i][j] = a[i-1][j-1]+1;
      else a[i][j] = max(a[i-1][j], a[i][j-1]);
    }
  }
  int n=s1.length(),m=s2.length();

  return a[n][m];
}

int main(){
  int t; cin>>t;
  while(t--){
    string s1,s2;
    cin>>s1>>s2;
    cout<<result(s1, s2)<<endl;
  }
  return 0;
}