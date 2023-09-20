#include<bits/stdc++.h>
using namespace std;
int n,m,x,y;
char a[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
bool bfs(int i,int j){
	queue<pair<int,int>>q;
	q.push({i,j});
	while(!q.empty()){
		pair<int,int>v=q.front();
		q.pop();
		if(a[v.first][v.second]=='B'){
			return true;
		}
		a[v.first][v.second]='x';
		for(int k=0;k<4;k++){
			int i1=v.first+dx[k];
			int j1=v.second+dy[k];
			if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]!='x'){
			q.push({i1,j1});	
			}
		}
	}
	return false;
}
void input(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			if(a[i][j]=='A'){
				x=i;
				y=j;
			}
		}
	}
	if(bfs(x,y)){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
int main(){
	input();
	return 0;
}
