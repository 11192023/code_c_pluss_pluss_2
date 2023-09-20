#include<iostream>
#include<cmath>
using namespace std;
int nt(int n){
	if(n<2)return 0;
	for(int i =2;i<=sqrt(n);i++)
	{
		if(n%i==0)return 0;
	}return 1;
	
}
int main(){
	int n;
	cin >>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}int cnt =0;
	for(int i=0;i<n;i++){
		if(nt(a[i])){
			++cnt;
		}cout<<cnt;
	}if(cnt ==0)cout<<"NONE";
	return 0;
}
