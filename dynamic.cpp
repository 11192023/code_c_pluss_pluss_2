#include<iostream>
using namespace std;
int binary_pow(int a,int b){
	int res=1;
	while(b){
		if(b%2==1){
			res*=a;
		}
		b/=2;
		a*=2;
	}
	return res;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<binary_pow(a,b)<<endl;
	return 0;
}
