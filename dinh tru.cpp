#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x;int y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
}
void dfs(int u){
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			dfs(x);
		}
	}
}
void f(){
	int tplt=0;
	memset(visit,false,sizeof(visit));
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			tplt++;
			dfs(i);
		}
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		memset(visit,false,sizeof(visit));
		visit[i]=true;
		int dem=0;
		for(int j=1;j<=n;j++){
			if(!visit[j]){
				dem++;
				dfs(j);
			}
		}
		if(dem>tplt){
		ans++;	
		cout<<i<<endl;
		}
	}
	cout<<ans<<endl;
}
int main(){
	input();
	f();
	return 0;
}
