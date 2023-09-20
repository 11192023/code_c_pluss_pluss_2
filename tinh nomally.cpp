#include<iostream>
using namespace std;
int const mod =1e9;
int x,y,d;
void extended(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}
	else{
		extended(b,a%b);
		int tmp=x;
		x=y;
		y=tmp-(a/b)*y;
	}
}
void inverse(int a,int m){
	extended(a,m);
	if(d!=1){
		cout<<"invalid!";
	}else{
		cout<<(x%m+m)%m<<endl;
	}
}
int bin_pow(int a,int b,int m){
	int res=1;
	a%=m;
	while(b){
		if(b%2==1){
			res*=a;
			res%=m;
		}
		a*=a;
		a%=m;
		b/=2;
	}
	return res;
}
int  inverse2(int a,int m){
	int res=bin_pow(a,m-2,m);
	return res;
}
int main(){
	int a;int b;
	cin>>a>>b;
	cout<<((a%5)*inverse2(b,5))%5<<endl;
	return 0;
}
