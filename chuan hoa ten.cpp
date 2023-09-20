#include<iostream>
#include<string>
#include<sstream>
using namespace std;
void chuanhoa(string &a){
	a[0]=toupper(a[0]);
	for(int i=1;i<a.size();i++){
		a[i]=tolower(a[i]);
	}
	}
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string token;
	const int max=100;
	string word[max];
	int count=0;
	while(ss>>token&&count<max){
		word[count]=token;
		count++;
	}
	for(int i=0;i<count;i++){
		chuanhoa(word[i]);
	}
	for(int i=0;i<count;i++){
		cout<<word[i]<<" ";
	}
	return 0;
}