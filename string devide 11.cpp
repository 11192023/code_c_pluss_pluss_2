#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int res=0;
	for(int i=0;i<s.length();i++){
		if(i%2==0){
			res+=s[i]-'0';
		}else{
			res-=s[i]-'0';
		}
	}
	if(res%11==0){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
