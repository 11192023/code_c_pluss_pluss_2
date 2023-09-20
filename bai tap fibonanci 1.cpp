#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long fnb1=0;long long fnb2=1;long long fnb;
	if(n==1){
		fnb=fnb1;
	} else if(n==2){
		fnb=fnb2;
	}else {
		for(int i=3;i<=n;i++){
			fnb=fnb1+fnb2;
			fnb1=fnb2;
			fnb2=fnb;
		}
	}cout<<fnb<<endl;
	return 0;
}
