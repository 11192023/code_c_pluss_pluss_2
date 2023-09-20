#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[1001][1001];
bool visit[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void bfs(int i,int j){
	queue<pair<int,int>>q;
	q.push({i,j});
	visit[i][j]=true;
	while(!q.empty()){
		pair<int,int>v=q.front();
		q.pop();
		for(int k=0;k<4;k++){
			int i1=v.first+dx[k];
			int j1=v.second+dy[k];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]=='x'&&!visit[i1][j1]){
				q.push({i1,j1});
				visit[i1][j1]=true;
			}
		}
	}
}
void input(){
	cin>>n>>m;
	memset(visit,false,sizeof(visit));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='x'&&!visit[i][j]){
				bfs(i,j);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
int main(){
	input();
	return 0;
}
6 6
xxxooo
Aoxooo
oxxxxo
ooooox
xxxxox
xBooox
