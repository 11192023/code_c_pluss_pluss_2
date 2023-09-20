#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	stack<string>v;
	while(ss>>token){
		v.push(token);
	}
	while(!v.empty()){
		cout<<v.top()<<" ";
		v.pop();
	}
	return 0;
}
