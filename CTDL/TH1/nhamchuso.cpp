#include<bits/stdc++.h>
using namespace std;

int main(){
  string a,b; cin>>a>>b;
  string c=a,d=b;

  int max=0,min=0;
  for(int i=0;i<a.length();i++){
    if (a[i]=='5') a[i]='6';
  }
  for(int i=0;i<b.length();i++){
    if (b[i]=='5') b[i]='6';
  }
  max = stoi(a) + stoi(b);

  for(int i=0;i<c.length();i++){
    if (c[i]=='6') c[i]='5';
  }
  for(int i=0;i<d.length();i++){
    if (d[i]=='6') d[i]='5';
  }

  min = stoi(c) + stoi(d);

  cout<<min<<" "<<max;


  return 0;

}