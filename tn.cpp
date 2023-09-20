#include<iostream>
using namespace std;
int tn(int n){
	int sum=0;
	int tmp=n;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}
	return sum==tmp;
}
int check(int n){
	while(n){
		if(n%10==9){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int cnt=0;
	for(int i=2;i<=n;i++){
		if(check(i)&&tn(i)){
			cout<<i<<" ";
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
