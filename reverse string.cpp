#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	vector<string>v;
	while(ss>>token){
		v.push_back(token);
	}
	for(int i=v.size()-1;i>=0;i--){
		cout<<v[i]<<" ";
	}
	return 0;
}
