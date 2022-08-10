#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], dp[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
		dp[i]=1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if (a[i]>a[j]) {
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
	}
	
	sort(dp, dp+n);
	cout<<dp[n-1];

	return 0;
}