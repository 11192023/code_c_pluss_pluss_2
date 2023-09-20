#include<iostream>
using namespace std;
int count(string s,int n){
	int cnt=0;
	for(int i=0;i<s.length();i++){
		int sum=0;
		for(int j=i;j<s.length();j++){
			sum=sum*10+s[j]-'0';
			sum%=n;
			if(sum==0)cnt++;
		}
	}
	return cnt;
}
int main(){
	string s;
	cin>>s;
	cout<<count(s,8)-count(s,24)<<endl;
	return 0;
}
