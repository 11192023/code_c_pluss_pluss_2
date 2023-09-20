#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void init(){
	queue<string>q;
	q.push("6");
	q.push("8");
	v.push_back("6");
	v.push_back("8");
	while(!q.empty()){
		string top=q.front();
		q.pop();
		if(top.length()==15)break;
		v.push_back(top+"6");
		v.push_back(top+"8");
		q.push(top+"6");
		q.push(top+"8");
	}
}
int main(){
	init();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string>a;
		for(auto x:v){
			if(x.length()==n+1)break;
			a.push_back(x);
		}
		reverse(a.begin(),a.end());
		for(auto x: a){
			cout<<x<<" ";
		}
	}
	return 0;
}
