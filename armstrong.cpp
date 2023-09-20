#include<iostream>
using namespace std;
int check(string s,int n){
	int a=s.size();
	int sum=1;
	for(int i=0;i<a;i++){
		sum*=n;
	}
	return sum;
}
bool check2(string s){
	int n=stoi(s);
	int sum=0;
	for(auto x:s){
		sum+=check(s,x-'0');
	}
	return sum==n;
}
int main(){
	string s;
	cin>>s;
	if(check2(s)){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
