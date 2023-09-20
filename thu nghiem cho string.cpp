#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	for(char x:s){
		if(x==','||x=='/'||x=='.'||x=='-'||x=='?'){
			x=' ';
		}
	}
	for(auto x:s){
		cout<<x;
	}
	return 0;
}
