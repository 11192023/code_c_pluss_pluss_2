#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int m;
	cin>>m;
	int r=0;
	for(int i=0;i<s.length();i++){
		r=r*10+(s[i]-'0');
		r%=m;
	}
	cout<<r;
	return 0;
}
