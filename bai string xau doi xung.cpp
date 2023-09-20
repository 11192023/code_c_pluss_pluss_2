#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;
bool ispalindrome(const string &word){
	int left=0;
	int right =word.length()-1;
	while(left<right){
		if(word[left]!=word[right]){
			return false;
		}
		left++;
		right--;
	}
	return true;
}
void printsymmetricword(const string &str){
	stringstream ss(str);
	string word;
	vector<string> symmetricwords;
	while(ss>>word){
		if(ispalindrome(word)){
			symmetricwords.push_back(word);
		}
	}
	for(const string &symmetricword:symmetricwords){
		cout<<symmetricword<<" ";
	}
}
int main(){
	string str;
	getline (cin,str);
	printsymmetricword(str);
	return 0;
}