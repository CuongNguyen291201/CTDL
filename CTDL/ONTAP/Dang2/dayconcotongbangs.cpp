#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n,s;
		cin>>n>>s;
		int a[n], dp[s+1];
		dp[0]=1;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=1;i<=s;i++) dp[i]=0;
		
		for(int i=0;i<=n;i++){
			for(int j=s;j>=a[i];j--){
				if (dp[j-a[i]]==1){
					dp[j]=1;
				}
			}
		}
		
		dp[s]==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
		
	}
	return 0;
}