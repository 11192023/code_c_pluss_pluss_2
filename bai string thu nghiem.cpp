#include<iostream>
#include<sstream>
using namespace std;
void optimal(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
string name(string &s){
	string res="";
	stringstream ss(s);
	string token;
	const int  max=100;
	string a[max];
	int count =0;
	while(ss>>token&&count<max){
		a[count]=token;
		count++;
	}
	for(int i=0;i<count;i++){
	    optimal(a[i]);	
	}
	for(int i=0;i<count;i++){
		res+=a[i];
		if(res!=a[count-1]){
			res+=" ";
		}
	}
	return res;
}
int main(){
	string s;
	getline(cin,s);
	s=name(s);
	cout<<s;
	return 0;
}
