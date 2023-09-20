#include<iostream>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		cin>>s[i];
		s[i]=tolower(s[i]);
	}
	for(int i=0;i<s.size();i++){
cout<<s[i];
}
return 0;
}
