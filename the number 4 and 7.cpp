#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d4=0;
	int d7=0;
	long long res4=INT_MAX;
	long long res7=INT_MAX;
	for(int i=n;i>=0;i--){
		if(n>=4*i&&(n-4*i)%7==0){
			d4=i;
			d7=(n-4*i)/7;
		if(res4+res7>d4+d7){
			res4=d4;
			res7=d7;
		}
	}
}
	if(4*res4+7*res7==n){
		for(int i=0;i<res4;i++){
			cout<<"4";
		}
		for(int i=0;i<res7;i++){
			cout<<"7";
		}
	}else{
		cout<<"-1";
	}
	return 0;
}
