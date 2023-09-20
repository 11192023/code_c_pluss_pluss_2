#include<iostream>
using namespace std;
long long check(long long a,long long b){
	if(b==0){
		return 1;
	}
	long long r=check(a,b/2);
	if(b%2==1){
		return a*r*r;
	}else{
		return r*r;
	}
}
int gcd(int a,int b){
	if(b==0)return a;
	return gcd(b,a%b);
}
int x,y,d;
void check1(int a,int b){
	if(b==0){
		x=1;
		y=0;
		d=a;
	}else{
		check1(b,a%b);
		int tmp=x;
		x=y;
		y=tmp-a/b*y;
	}
}
void check2(int a,int m){
	check1(a,m);
	if(d!=1){
		cout<<"no found!"<<endl;
	}
	else{
		cout<<(x%m+m)%m<<endl;
	}
}
//m isprime
void check3(int a,int m){
	cout<<check(a%m,m-2)%m<<endl;
}
int c[1000][1000];
void init(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i){
				c[i][j]=1;
			}
			else{
				c[i][j]=c[i-1][j]+c[i-1][j-1];
				c[i][j]%=1000000007;
			}
		}
	}
}
int main(){
	init();
	long long a,b;
	cin>>a>>b;
	cout<<c[a][b]<<endl;
	int c=gcd(a,b);
	long long result=check(a%1000000007,b)%1000000007;
	check3(a,b);
	check2(a,b);
	check1(a,b);
	cout<<d<<" "<<x<<" "<<y;
	cout<<endl;
	cout<<result<<" "<<c ;
	return 0;
}
