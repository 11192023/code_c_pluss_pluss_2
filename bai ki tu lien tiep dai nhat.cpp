#include<iostream>
#include<map>
using namespace std;
string find(string &s){
	map<char,int>frequency;
	char maxchar='\0';
	int countmax=0;
	for(char x:s){
		frequency[x]++;
	}
    for(char x:s){
    	if(frequency[x]>countmax||frequency[x]==countmax && x > maxchar){
    		maxchar=x;
    		countmax=frequency[x];
		}
	}
	string result(countmax,maxchar);
	return result;
}
int main(){
	string s;
	cin>>s;
	string result=find(s);
	cout<<result;
	return 0;
	
}