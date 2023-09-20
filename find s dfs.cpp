#include<bits/stdc++.h>
using namespace std;
int n,m,x1,y1;
char a[1001][1001];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
bool dfs(int i,int j){
	cout<<"noi so 1"<<endl;
	cout<<i<<" "<<j<<endl;
	if(a[i][j]=='B'){
		return true;
	}
	a[i][j]='x';
	for(int k=0;k<4;k++){
		int i1=i+dx[k];
		int j1=j+dy[k];
		if(i1>=1&&i1<=n&&j1>=1&&j1<=m&&a[i1][j1]!='x'){
			cout<<"noi so 2"<<endl;
			cout<<i1<<" "<<j1<<endl;
			if(dfs(i1,j1))return true;
			cout<<"noi so 3"<<endl;
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
				x1=i;
				y1=j;
			}
		}
	}
	if(dfs(x1,y1)){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
int main(){
	input();
	return 0;
}
