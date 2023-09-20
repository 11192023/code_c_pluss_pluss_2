#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		string s;
		cin>>s;
		map<char,int>mp;
		for(auto x:s){
			mp[x]++;
		}
		priority_queue<int>q;
		for(auto x:mp){
			q.push(x.second);
		}
		while(k>0){
			int top=q.top();
			q.pop();
			top--;k--;
			q.push(top);
		}
		int ans=0;
		while(!q.empty()){
			ans+=q.top()*q.top();
			q.pop();
		}
		cout<<ans<<endl;
	}
	return 0;
}
