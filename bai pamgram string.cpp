#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;
bool check_alpha(const string &str){
	unordered_set<char> char_text;
	for(char c: str){
		if(isalpha(c)){
			char_text.insert(tolower(c));
		}
	}
	return  char_text.size()==26;
}
int main(){
	string str;
	getline ( cin ,str);
	if(check_alpha(str)){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}