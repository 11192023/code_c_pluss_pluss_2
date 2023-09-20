#include<iostream>
using namespace std;
string dextohex(long long n){
	if(n==0){
		return "0";
	}
	string hexstring ="";
	while(n>0){
		int remain =n%16;
		if(remain<10){
			hexstring= char(remain+'0')+hexstring;
		}
		else
		hexstring=char(remain-10+'A')+hexstring;
		n/=16;
	}
	return hexstring;
}
int main(){
	long long n;
	cin>>n;
	string hexstring=dextohex(n);
	cout<<hexstring;
	return 0;
}
