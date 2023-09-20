#include<iostream>
#include<cmath>
using namespace std;
void init(int l,int r){
	int a[r-l+1];
	for(int i=0;i<r-l+1;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=2;i<=sqrt(r);i++){
		if(a[i]){
			for(int j=max(i*i,(l+i-1)/i*(i));j<=r;j+=i){
				a[j-l]=0;
			}
		}
	}
	for(int i=(2,l);i<=r;i++){
		if(a[i-l]){
			cout<<i<<" ";
		}
	}
}
int main(){
	int l;
	int r;
	cin>>l>>r;
	init(l,r);
}
