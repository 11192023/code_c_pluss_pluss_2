#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
int color[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x;int y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(color,-1,sizeof(color));
}
bool bfs(int u){
	queue<int>q;
	q.push(u);
	color[u]=0;
	while(!q.empty()){
		int v=q.front();
		q.pop();
		for(auto x:a[v]){
			if(color[x]==-1){
				color[x]=1-color[v];
				q.push(x);
			}else if(color[x]==color[v]){
				return  false;
			}
		}
	}
	return true;
}
int main(){
	input();
	bool ok=true;
	for(int i=1;i<=n;i++){
		if(color[i]==-1){
			if(!bfs(i)){
				ok=false;
				break;
			}
		}
	}
	if(ok){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
