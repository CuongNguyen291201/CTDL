#include<bits/stdc++.h>
using namespace std;

struct work {
  int s,f;
};

work a[100005];
int n;

bool cmp(work a, work b) {
  return a.f < b.f && a.s <= n && b.s <= n && (a.s + b.s) <= n;
}

void result(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i].s>>a[i].f;
  }

  sort(a, a+n, cmp);

  long long res=0,tmp=0,r=a[0].s;
  vector<work> arr;
  for(int i=1;i<n;i++){
    // cout<<a[i].s<<" "<<a[i].f<<endl;
    if (a[i].s + r <= n) {
      r += a[i].s;
      arr.push_back(a[i]);
    }
  }

  for(int i=0;i<arr.size();i++){
    cout<<arr[i].s<<" "<<arr[i].f<<endl;
  }

}

int main(){
  result();
  return 0;
}