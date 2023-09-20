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
bool dfs(int u,int pa){
   color[u]=1-color[pa];
   for(auto x:a[u]){
   	if(color[x]==-1){
   		if(!dfs(x,u))return false;
	   }else if( color[x]==color[u]){
	   	return false;
	   }
   }
   return true;
}
int main(){
	input();
	bool ok=true;
	color[0]=1;
	for(int i=1;i<=n;i++){
		if(color[i]==-1){
			if(!dfs(i,0)){
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
