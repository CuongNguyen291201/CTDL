#include<bits/stdc++.h>
using namespace std;

int n,s, check=0; long long k, res=0;
int a[100005];

void cal(int s, int m){
	while(s>m){
		res+=a[s];
		if (res==k){
			check=1;
			cout<<s<<endl;
			break;
		}
		if (res>k) {
			check=1;
			cout<<s-1<<endl;
			break;
		}
		s--;
	}
}

void result(){
	cin>>n>>s>>k;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	cal(s,s/2);
	s/=2;
	while (check!=1&&s>1){
		cal(s,s/2);
		s/=2;
	}
	if (check!=1 && s==1){
		cout<<1<<endl;
	}
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}
