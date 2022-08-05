#include<bits/stdc++.h>
using namespace std;

int n;

void dijkstra(int start){
	int i,u,v;
	for(int i=1;i<=n) d[i]=1e9;
	d[start]=0;
	while(!q.empty()) q.pop();
	q.push({0, start});
	while(!q.empty()){
		u=q.top().second; q.pop();
		for(int i=0;i<list[u].size();i++){
			v=list[u][i].second;
			int d_u_v = list[u][i].first;
			if (d[u]+d_u_v<d[v]) {
				d[v]=d[u]+d_u_v;
				q.push({d[v], v});
			}
		}
	}
	for(int i=1;i<=n;i++) cout<<d[i]<<" ";
	cout<<endl;
}

int main(){
	int t; cin>>t;
	while(t--){
		
	}
	return 0;
}
