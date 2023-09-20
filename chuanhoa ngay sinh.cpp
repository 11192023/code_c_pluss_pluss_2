#include<iostream>
using namespace std;
void chuanhoa(string &s){
	if(s[2]!='/'){
		s="0"+s;
	}
	if(s[5]!='/'){
		s.insert(3,"0");
	}
}
int main(){
	cout<<"enter of the element for the string:"<<endl;
	string s;
	cin>>s;
	chuanhoa(s);
	cout<<s;
	return 0;
}