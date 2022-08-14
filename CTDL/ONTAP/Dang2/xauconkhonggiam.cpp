#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.length();
	vector<int> dp(n, 1);
	
	for(int i=0;i<s.length();i++){
		for(int j=0;j<i;j++){
			if (s[i]>=s[j]){
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
	}
	
	sort(dp.begin(), dp.end());
	cout<<dp[n-1];
	return 0;
}
