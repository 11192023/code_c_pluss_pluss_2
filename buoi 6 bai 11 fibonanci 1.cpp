#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long fn1=0;long long fn2=1;long long fn;
	if(n==1){
		fn=fn1;
	}else if(n==2){
		fn=fn2;
	}else{
		for(int i=3;i<=n;i++){
			fn =fn1+fn2;
			fn1=fn2;
			fn2=fn;
		}
	}cout<<fn<<endl;
	return 0;
}
