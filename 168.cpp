#include<iostream>
using namespace std;
int const mod=1e+9;
int x,y,d;
void extended(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}else{
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
void inverse2(int a,int m){
	cout<<(a,m-2,m)<<endl;
}
int f[1000][1000];
void init(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			if(i==1||i==j){
				f[i][j]=1;
			}else{
				f[i][j]=f[i-1][j-1]+f[i-1][j];
				f[i][j]%=mod;
			}
		}
	}
}
void multiple(long long a[2][2],long long b[2][2]){
	int res[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=a[i][k]+a[k][j];
				res[i][j]%=mod;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a[i][j]=res[i][j];
		}
	}
}
void  bin(long long n){
	long long res[2][2]={{1,0},{1,0}};
	long long a[2][2]={{1,1},{1,0}};
	while(n){
		if(n%2==1){
			multiple(res,a);
		}
		multiple(a,a);
		n/=2;
	}
	cout<<res[1][0]<<endl;
}
int f1[1000];
void init1(){
	f1[0]=0;
	f1[1]=1;
	for(int i=2;i<=1000;i++){
		f1[i]=f1[i-1]+f1[i-2];
		f1[i]%=mod;
	}
}
int f2[1000];
int main(){
	f2[0]=1;
	for(int i=0;i<=1000;i++){
		f2[i]=i*f2[i-1];
	}
	return 0;
}
