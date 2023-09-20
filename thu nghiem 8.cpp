#include<bits/stdc++.h>
using namespace std;
bool ktnt (int n){
	if(n<2)return false;
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
int check (int n){
	int cuoi =n%10;
	int so = cuoi;
	n/=10;
	while(n>0){
		int dau =n%10;
		if(dau>so)return 0;
		
		n/=10;
	}
	return 1;
	
}
int main(){
	int n;
	cin>>n;
	int cnt =0;
	if(n>=2)cout<<"2"<<" ",cnt++;
	for(int i=3;i<=n;i+=2){
		if(check(i)&&ktnt(i)){
			cout<<i<<" ";
			cnt++;
		}
		
	}cout<<endl<<cnt;
	return 0;
}
