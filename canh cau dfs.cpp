#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
vector<pair<int,int>>b;
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x;int y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
		b.push_back({x,y});
	}
}
void dfs(int u){
	visit[u]=true;
	for(auto x: a[u]){
		if(!visit[x]){
			dfs(x);
		}
	}
}

void dfs1(int u,int s,int t){
	visit[u]=true;
	for(auto x:a[u]){
		if(s==x&&t==u||s==u&&t==x)continue;
		if(!visit[x]){
			dfs1(x,s,t);
		}
	}
}
void f(){
	memset(visit,false,sizeof(visit));
	int tplt=0;
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			tplt++;
			dfs(i);
		}
	}
	int ans=0;
	for(auto x:b){
		int s=x.first;
		int t=x.second;
		memset(visit,false,sizeof(visit));
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!visit[j]){
				dem++;
				dfs1(j,s,t);
			}
		}
		if(dem>tplt){
			ans++;
			cout<<s<<" "<<t<<endl;
		}
	}
	cout<<ans<<endl;
}
int main(){
	input();
	f();
	return 0;
}
