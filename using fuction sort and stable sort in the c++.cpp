#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
//sort
//stable_sort
bool cmp(int a,int b){
	return abs(a)<abs(b);
}
bool cmp1(string a,string b){
	if(a.length()!=b.length()){
	return a.length()>b.length();
}
else{
	return a<b;
}
}
int main(){
/*	int n;
	cin>>n;
//	int a[100];
    vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
//	sort(a,a+n);//a[x]=>a[y] sort(a+x,a+y+1)
//	sort(a,a+n,greater<int>());
    sort(a.begin()+1,a.begin()+3);
   // sort(a.begin(),a.end(),greater<int>());
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}*/
/*	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,greater<string>());
	for(string x:s){
		cout<<x<<" ";
	}
	string a;
	cin.ignore();
	getline(cin,a);
	sort(a.begin(),a.end());
	cout<<a;*/
/*	int n;
	cin>>n;
	pair<string ,int>a[n];
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	for(auto x:a){
		cout<<x.first<<" "<<x.second<<endl;
	}*/ 
/*	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	stable_sort(a,a+n,cmp);
	for(auto x:a){
		cout<<x<<" ";
	}*/
	int n;
	cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
    	cin>>s[i];
	}
	sort(s,s+n,cmp1);
	for(auto x:s){
		cout<<x<<" ";
	}
	return 0;
}
