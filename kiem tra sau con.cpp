#include<iostream>
using namespace std;
bool check(string &s1,string &s2){
	for(int i=0;i<s2.length();i++){
		bool found=true;
		for(int j=0;j<s1.length();j++){
			if(s2[i]!=s1[j]){
				found=false;
				break;
			}
		}
		if(found){
			return true;
		
		}
	}
	return false;
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	if(check(s1,s2)){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	return 0;
}