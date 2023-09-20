#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	while(1){
		if(y%x==0){
			cout<<"1/"<<y/x<<endl;
			break;
		}else{
			int res=y/x+1;
			cout<<"1/"<<res<<"+";
			x=x*res-y;
			y=res*y;
		}
	}
	return 0;
}
