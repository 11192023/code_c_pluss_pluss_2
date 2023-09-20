#include<iostream>
#include<sstream>
using namespace std;
int main(){
	cout<<"enter of the element for the string:"<<endl;
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
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
	string res="";
	res+=word[count-1];
	for(int i=0;i<count-1;i++){
		res+=word[i][0];
	}
	cout<<res<<"@gamil.com"<<endl;
	return 0;
}