#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
void name(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	vector<string>v;
	while(ss>>token){
		v.push_back(token);
	}
	for(int i=0;i<v.size();i++){
		name(v[i]);
	}
	string res="";
	for(int i=0;i<v.size();i++){
		res+=v[i];
		if(i!=v.size()-1){
			res+=" ";
		}
	}
	cout<<res<<endl;
	return 0;
}
