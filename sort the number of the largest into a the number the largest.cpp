#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
	string ab=a+b;
	string ba=b+a;
	if(ab>ba)return true;
	return false;
}
int main(){
	int n;cin>>n;
	vector<string>v;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		v.push_back(s);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x:v){
		cout<<x;
	}
	return 0;
}
