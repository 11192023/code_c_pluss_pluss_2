#include<iostream>
#include<sstream>
#include<string>
using namespace std;
void viethoa(string &s){
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
}
void chuanhoa(string&s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main (){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	const int max =100;
	string a[max];
	int size=0;
	while(ss>>token){
		a[size]=token;
		size++;
	}
	for(int i=0;i<size-1;i++){
		chuanhoa(a[i]);
		cout<<a[i];
		if(i==size-2)cout<<", ";
		else cout<<" ";
	}
	viethoa(a[size-1]);
	cout<<a[size-1];
	cout<<endl;
}