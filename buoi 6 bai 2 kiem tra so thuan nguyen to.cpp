#include<iostream>
#include<cmath>
using namespace std;
bool nt(int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
	
}
bool csnt(int n){
	while(n){
		int r=n%10;
		if(r!=3&&r!=5&&r!=2&&r!=7){
			return false;
		}
		n/=10;
	}return true;
}
int sum(int n){
	int sum =0;
	while (n){
		sum +=n%10;
		n/=10;
	}return nt(sum);
}
int dem(int a,int b){
	int cnt =0;
	for(int i=a;i<=b;i++){
		if(csnt(i)&&nt(i)&&sum(i)){
			cnt++;
		}
	}return cnt;
}
int main(){
	int a,b;
	cin>>a>>b;
	int cnt=dem(a,b);
	cout<<cnt<<endl;
	return 0;
}
