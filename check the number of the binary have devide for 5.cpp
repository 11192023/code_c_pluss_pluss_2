#include<iostream>
using namespace std;
void check(){
	string s;
	cin>>s;
	int lt=1;
	int r=((s[s.length()-1]-'0')%5*(lt%5))%5;
	for(int i=s.length()-2;i>=0;i--){
		lt*=2;
		lt%=5;
		r=r+(s[i]-'0')*lt;
		r%=5;
	}
	if(r==0){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
int main(){
	check();
	return 0;
}
