#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
int in[1001];
vector<int>topo;
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		in[y]++; 
	}
}
void kahn(){
	queue<int>q;
	for(int i=1;i<=n;i++){
		if(in[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		int u=q.front();
		q.pop();
		topo.push_back(u);
		for(auto x:a[u]){
			in[x]--;
			if(in[x]==0){
				q.push(x);
			}
		}
	}
	for(auto x:topo){
		cout<<x<<" ";
	}
}
int main(){
	input();
	kahn();
	return 0;
}
