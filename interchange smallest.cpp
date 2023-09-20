#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[i].first=x;
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	int ans=0;
	for(int i=0;i<n;i++){
		if(v[i].second!=i){
			swap(v[i].first,v[v[i].second].first);
			swap(v[i].second,v[v[i].second].second);
			if(v[i].second!=i)--i;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
