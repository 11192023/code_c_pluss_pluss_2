#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	cout <<"enter of the element of string "<<endl;
	string s;
	cin>>s;
	map<char,int >frequency;
	for(int i=0;i<s.length();i++){
		frequency[s[i]]++;
	}
	int count=0;
	char character;
	for(int i=0;i<s.length();i++){
		if(frequency[s[i]]>count){
			count=frequency[s[i]];
			character=s[i];
		}
	}
	cout<<character<<" "<<count;
	return 0;
}