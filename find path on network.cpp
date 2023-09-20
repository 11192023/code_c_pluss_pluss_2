#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int>s,e;
int a[1001][1001];
int d[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void input(){
	cin>>n>>m>>s.first>>s.second>>e.first>>e.second;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	memset(d,0,sizeof(d));
}
int sieve(){
	queue<pair<int,int>>q;
	q.push({s.first,s.second});
	d[s.first][s.second]=0;
	while(!q.empty()){
		pair<int,int>top=q.front();
		q.pop();
		int i=top.first;
		int j=top.second;
		for(int k=0;k<4;k++){
			int i_1=i+dx[k];
			int j_1=j+dy[k];
			if(a[i_1][j_1]&&i_1>=0&&i_1<n&&j_1>=0&&j_1<m){
				a[i_1][j_1]=0;
				if(i_1==e.first&&j_1==e.second){
					return d[i][j]+1;
				}
				q.push({i_1,j_1});
				d[i_1][j_1]=d[i][j]+1;
			}
		}
	}
	return -1;
}
int main(){
	input();
	cout<<sieve()<<endl;
	return 0;
}
9 10 0 0 3 4
1 0 1 1 1 1 0 1 1 1
1 0 1 0 1 1 1 0 1 1
1 1 1 0 1 1 0 1 0 1
0 0 0 0 1 0 0 0 0 1
1 1 1 0 1 1 1 0 1 0
1 0 1 1 1 1 0 1 0 0
1 0 0 0 0 0 0 0 0 1
1 0 1 1 1 1 0 1 1 1
1 1 0 0 0 0 1 0 0 1
