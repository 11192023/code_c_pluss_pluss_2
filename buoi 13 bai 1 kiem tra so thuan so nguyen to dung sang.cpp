#include<iostream>
#include<cmath>
using namespace std;
int a,b;
bool nt(int x){
	if(x<=1)return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return false;
		}
	}
	return true; 
}
bool check_3 (int x){
	int cnt=0;
	int t=x;
	while(x>0){
		int s=x%10;
		if(!nt(s))return false;
		cnt+=s;
		x/=10;
	}
	if(!nt(cnt)||!nt(t))return false;
	return true;
}
int main(){
	cin>>a>>b;
	int k=0;
	for(int i=a;i<=b;i++){
		if(check_3(i)){
			k++;
		}
	}
	cout<<k;
	return 0;
}
