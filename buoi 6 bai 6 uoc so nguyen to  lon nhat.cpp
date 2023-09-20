#include<bits/stdc++.h>
using namespace std;
bool ktnt (int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
int lonnhat(int n){
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(n%i==0&&ktnt(i)){
		cnt = i;}
	}return cnt;
}
int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		cout<<lonnhat(n)<<endl;
	}return 0;
	
}
