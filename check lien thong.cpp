#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
bool visit[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		a[y].push_back(x);
	}
	memset(visit,false,sizeof(visit));
}
void dfs(int u){
	cout<<u<<" ";
	visit[u]=true;
	for(auto x:a[u]){
		if(!visit[x]){
			dfs(x);
		}
	}
}
void count(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!visit[i]){
			cnt++;
			cout<<"cac dinh thuoc thanh phan lien thong thu"<<cnt<<": ";
			dfs(i);
			cout<<endl;
		}
	}
	cout<<cnt<<endl;
}
int main(){
	input();
    count();
}
