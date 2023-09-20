#include<bits/stdc++.h>
using namespace std;
struct edge{
	int x,y;
	int w;
};
int n,m;
vector<pair<int,int>>a[1001];
bool used[1001];
int parent[1001];
int d[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		a[x].push_back({y,w});
		a[y].push_back({x,w});
	}
	memset(used,false,sizeof(used));
	for(int i=1;i<=n;i++){
		d[i]=INT_MAX;
	}
}
void prim(int u){
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
	vector<edge>mst;
	int res=0;
	q.push({0,u});
	while(!q.empty()){
		pair<int,int>top=q.top();
		q.pop();
		int dinh=top.second;
		int ts=top.first;
		if(used[dinh])continue;
		res+=ts;
		used[dinh]=true;
		if(u!=dinh){
			mst.push_back({dinh,parent[dinh],ts});
		}
		for(auto it:a[dinh]){
			int y=it.first;
			int w=it.second;
			if(!used[y]&&w<d[y]){
				cout<<w<<" "<<y<<endl;
				q.push({w,y});
				d[y]=w;
				parent[y]=dinh;
			}
		}
	}
	cout<<res<<endl;
	for(auto x:mst){
		cout<<x.x<<" "<<x.y<<" "<<x.w<<endl;
	}
}
int main(){
	input();
	prim(1);
	return 0;
}
