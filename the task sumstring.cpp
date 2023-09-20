#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string sum(string a,string b){
	if(a.length()<b.length()){
		string tmp=a;
		a=b;
		b=tmp;
	}
	int n=a.length();
	int m=b.length();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	b+=string(n-m,'0');
	int rem=0;
	string res="";
	for(int i=0;i<n;i++){
		int tmp=a[i]-'0'+b[i]-'0'+rem;
		res+=(tmp%10+'0');
		rem=tmp/=10;
	}
	if(rem)res+=(rem+'0');
	reverse(res.begin(),res.end());
	return res;
}
int check(string s,int l,int len1,int len2){
	string s1=s.substr(l,len1);
	string s2=s.substr(l+len1,len2);
	string s3=sum(s1,s2);
	if(s3.length()>(s.length()-len1-len2-l))return false;
	if(s3==s.substr(len1+len2+l,s3.length())){
		if(s.length()==len1+len2+l+s3.length()){
			return 1;
		}
		return check(s,len1+l,len2,s3.length());
	}
	return 0;
}
void sieve(){
	string s;
	cin>>s;
	for(int i=1;i<s.length();i++){
		for(int j=1;j<s.length()-i;j++){
			if(check(s,0,i,j)){
				cout<<"yes";
				return;
			}
		}
	}
	cout<<"no";
}
int main(){
	sieve();
	return 0;
}
