#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int countword(const string & str){
	stringstream ss(str);
	string word;
	int count =0;
	while(ss>>word){
		count ++;
	}
	return count ;
}
int main(){
	string str;
	getline(cin, str);
	int wordcount=countword(str);
	cout<<wordcount<<endl;
	return 0;
}