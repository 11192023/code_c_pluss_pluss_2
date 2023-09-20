#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100][100];
	vector<pair<int,int>>v;
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		while(ss>>token){
			if(i<stoi(token)){
				v.push_back({i,stoi(token)});
			}
		}
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
