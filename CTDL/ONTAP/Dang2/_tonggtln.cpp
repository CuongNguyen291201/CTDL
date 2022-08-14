#include<bits/stdc++.h>
using namespace std;

int n,k;
int a[5005], c[5005], dp[5005][5005];

void result(){
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}

	for(int i=0;i<=k;i++) dp[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if (a[i]<=j){
				dp[i][j]=max(dp[i-1][j], dp[i-1][j-a[i]]+c[i]);
			} else {
				dp[i][j]=dp[i-1][j];
			}
		}
	}
	cout<<dp[n][k]<<endl;
}

int main(){
	cin>>n>>k;
	result();
	return 0;
}
