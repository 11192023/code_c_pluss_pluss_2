#include<bits/stdc++.h>
using namespace std;
int n,m;
set<int>a[1001];
void input(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		a[x].insert(y);
		a[y].insert(x);
	}
}
void euler(int u){
	stack<int>st;
	vector<int>s;
	st.push(u);
	while(!st.empty()){
		int top=st.top();
		if(a[top].size()!=0){
			int y=*a[top].begin();
			st.push(y);
			a[top].erase(y);
			a[y].erase(top);
		}else{
			st.pop();
			s.push_back(top);
		}
	}
	reverse(s.begin(),s.end());
	for(auto x:s){
		cout<<x<<" ";
	}
}
int main(){
	input();
	euler(3);
	return 0;
}
