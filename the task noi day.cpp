#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	priority_queue<int,vector<int>,greater<int>>v;
	for(int i=0;i<n;i++){
		v.push(a[i]);
	}
	long long ans=0;
	while(v.size()>1){
		long long top1=v.top();
		v.pop();
		long long top2=v.top();
		v.pop();
		ans+=top1+top2;
		v.push(top1+top2);
	}
	cout<<ans<<endl;
	return 0;
}
