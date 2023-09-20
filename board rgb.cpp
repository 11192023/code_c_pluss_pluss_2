#include<iostream>
using namespace std;
int a[22];
void init(){
	a[0]=1;
	for(int i=1;i<22;i++){
		a[i]=i*a[i-1];
	}
}
void result(int n,int r,int g,int b){
	init();
	int res=0;
	for(int R=n;R>=r;R--){
		for(int G=n-R;G>=g;G--){
			int B=n-R-G;
			if(B>=b){
				res+=a[n]/(a[R]*a[G]*a[B]);
			}
		}
	}
	cout<<res;
}
int main(){
	int n,r,g,b;
	cin>>n>>r>>g>>b;
	result(n,r,g,b);
	return 0;
}
