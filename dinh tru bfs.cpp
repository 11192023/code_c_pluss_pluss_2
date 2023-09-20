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
void bfs(int u){
	queue<int>q;
	q.push(u);
	visit[u]=true;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto x:a[v]){
			if(!visit[x]){
				q.push(x);
				visit[x]=true;
			}
		}
	}
}
void f(){
	memset(visit,false,sizeof(visit));
	int tplt=0;
	for(int i=1;i<=n;i++)
	{
		if(!visit[i]){
			tplt++;
			bfs(i);
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
				bfs(j);
			}
		}
		if(dem>tplt){
			ans++;
			cout<<i<<" ";
		}
		cout<<endl;
	}
	cout<<ans<<endl;
}
int main(){
	input();
	f();
    return 0;
}
