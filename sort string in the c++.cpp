#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int check(char c){
	return c==' '||c=='.'||c=='?'||c==','||c=='-'||c=='!';
}
bool cmp(pair<string,int>a,pair<string,int>b){
	if(a.second!=b.second){
		return a.second>b.second;
	}return a.first<b.first;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	map<string,int>mp;
	while(t--){
		string s;
		getline(cin,s);
		string tmp="";
		for(int i=0;i<s.length();i++){
			if(s[i]==' ')continue;
			while(i<s.length()&&!check(s[i])){
				tmp+=(char)s[i];
				i++;
			}
			mp[tmp]++;
			tmp="";
		}
	}
	vector<pair<string,int>>v;
	for(auto x:mp){
		v.push_back(x);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
