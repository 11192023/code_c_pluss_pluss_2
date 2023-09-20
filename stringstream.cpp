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
int inverse2(int a,int m){
	return bin_pow(a,m-2,m);
}
int c[1000][1000];
void init(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==1||i==j){
				c[i][j]=1;
			}else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%=mod;
			}
		}
	}
}
int f1[10000];
void init2(){
	f1[0]=0;
	f1[1]=1;
	for(int i=2;i<=10000;i++){
		f1[i]=f1[i-1]+f1[i-2];
		f1[i]%=mod;
	}
}
void multiple(long long  a[2][2],long long b[2][2]){
	int res[2][2];
	for(int i=2;i<2;i++){
		for(int j=2;j<2;j++){
			res[i][j]=0;
			for(int k=0;k<2;k++){
				res[i][j]+=a[i][k]*b[k][j]%mod;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a[i][j]=res[i][j];
		}
	}
}
long long bin(long long n){
	long long res[2][2]={{1,0},{0,1}};
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
int f[1000];
int main(){
	int n,k;
	cin>>n>>k;
	f[0]=1;
	for(int i=1;i<=1000;i++){
		f[i]=i*f[i-1];
		f[i]%=mod;
	}
	cout<<(f[n]%mod*inverse2(f[n-k]*f[k]%mod,mod))%mod<<endl;
	return 0;
}
