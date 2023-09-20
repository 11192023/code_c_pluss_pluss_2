#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int>a[1001];
int indegree[1001];
void input(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		a[x].push_back(y);
		indegree[y]++;
	}
}
bool kahn(){
	queue<int>q;
	for(int i=1;i<=n;i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
	int cnt=0;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		cnt++;
		for(auto x :a[u]){
			indegree[x]--;
			if(indegree[x]==0){
				q.push(x);
			}
		}
	}
	if(cnt==n){
		return false;
	}else{
		return true;
	}
}
int main(){
	input();
	if(kahn()){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
