#include <iostream>
using namespace std ;
int main(){
	int a,b,c,d,e,f,n;
	cin>>a>>b>>c>>d>>e>>f>>n;
	int tongcup =a+b+c;
	int tonghuychuong = d+e+f;
	int soke= 0;
	if(tongcup%5==0){
		soke+=tongcup/5;
		
	}else {soke+=tongcup/5+1;
	}if(tonghuychuong%10==0){
		soke+=tonghuychuong/5;
	}else{soke+=tonghuychuong/5+1;
	}if(soke<=n){
		cout<<"YES";
	}else{cout<<"NO";
	}return 0;
}
