#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ok;
int a[505];
vector<long long>v;
void gen(string &s){
	int i=s.length()-1;
	while(i>=0&&s[i]=='9'){
		s[i]='0';
		i--;
	}if(i==0){
		ok=0;
	}else{
		s[i]='9';
	}
}

int main(){
	string s(13,'0');
	ok=1;
	gen(s);
	while(ok){
		v.push_back(stoll(s));
		gen(s);
	}
	for(int i=1;i<=500;i++){
		for(long long x:v){
			if(a[i]==0&&x%i==0){
				a[i]=x;
			}
		}
	}
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
	return 0;
}
