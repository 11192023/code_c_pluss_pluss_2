#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001],b[1001];
bool visit[1001];
stack<int>st;
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x;int y;
		cin>>x>>y;
		a[x].push_back(y);
		b[y].push_back(x);
	}
}
void dfs1(int u){
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			dfs1(x);
		}
	}
	cout<<u<<" ";
	st.push(u);
}
void dfs2(int u){
	visit[u]=true;
	cout<<u<<" ";
	for(auto x: b[u]){
		if(!visit[x]){
			dfs2(x);
		}
	}
}
void kosaraju(){
	memset(visit,false,sizeof(visit));
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			dfs1(i);
		}
	}
	cout<<endl;
	int cnt=0;
	vector<int>c;
	memset(visit,false,sizeof(visit));
	while(!st.empty()){
		int u=st.top();
		st.pop();
		if(!visit[u]){
			c.push_back(u);
			dfs2(u);
			cnt++;
		}
	}
	if(cnt==1){
		cout<<"yes";
	}else{
		cout<<"no"<<endl;
		cout<<c[0]<<" "<<c[1]<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		input();
		kosaraju();
		for(int i=1;i<=n;i++){
			a[i].clear();
			b[i].clear();
		}
	}
	return 0;
}
