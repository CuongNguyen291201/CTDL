#include<bits/stdc++.h>
using namespace std;

int v,e,u,check[10005];
int a[1005][1005];

void dfs(int u){
	cout<<u<<" ";
	check[u]=1;
	for(int i=1;i<=v;i++){
		if(a[u][i]==1 && check[i]==0) dfs(i);
	}	
}

void result(){
	cin>>v>>e>>u;
	memset(a, 0, sizeof(a));
	memset(check, 0, sizeof(check));
	for(int i=1;i<=e;i++){
		int x,y; cin>>x>>y;
		a[x][y]=1;
		a[y][x]=1;
	}
	dfs(u);
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		result();
	}
	return 0;
}