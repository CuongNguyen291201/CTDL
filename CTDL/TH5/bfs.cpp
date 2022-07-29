#include<bits/stdc++.h>
using namespace std;

int v,e,u,check[10005];
vector <int> a[1005];

void bfs(int u){
	queue <int> q;
	q.push(u); check[u]=1;
	while(q.empty()==0){
		int s=q.front(); q.pop();
		cout<<s<<" ";
		
		for(int i=0;i<a[s].size();i++){
			int t = a[s][i];
			if (check[t]==0){
				check[t]=1;
				q.push(t);
			}
		}
	}
}

void result(){
	cin>>v>>e>>u;
	memset(a, 0, sizeof(a));
	memset(check, 0, sizeof(check));
	for(int i=1;i<=e;i++){
		int x,y; cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	bfs(u);
	cout<<endl;
}	

int main(){
	int t; cin>>t;
	while(t--) result();
	return 0;
}