#include<bits/stdc++.h>
using namespace std;

int m,n,U,check[1005];
vector <int> a[1005];

void dfs(int u){
	check[u]=1;
	for(int i=0;i<a[u].size();i++){
		int w = a[u][i];
		if (check[w]==0) dfs(w);	
	}
}

void result(){
	cin>>n>>m;
	memset(a, 0, sizeof(a));
	for(int i=1;i<=m;i++){
		int u,v; cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	int q; cin>>q;
	for(int i=1;i<=q;i++){
		int x,y; cin>>x>>y;
		memset(check, 0, sizeof(check));
		dfs(x);
		if (check[y]==0) cout<<"NO\n";
		else cout<<"YES\n";
	}
}

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}