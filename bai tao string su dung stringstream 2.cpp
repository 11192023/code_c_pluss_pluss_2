#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	vector<string>v;
	string word;
	while (ss>>word){
		v.push_back(word);
	}
	for(string x:v){
		cout<<x<<endl;
	}
	return 0;
}
