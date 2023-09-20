#include<iostream>
using namespace std;
int main (){
	long long a,b ,k;
	cin>>a>>b>>k;
	long long position =0;
	for(int i=1;i<=k;i++){
		if(i%2==1){
			position+=a;
		}else{
			position-=b;
		}
	}cout<<position;
	return 0;
}
