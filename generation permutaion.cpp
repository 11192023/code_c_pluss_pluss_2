#include<iostream>
using namespace std;
int n,a[100],ok;
void indicate(){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
}
void gen(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		int j=n;
		while(a[i]>a[j])--j;
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		int l=i+1;
		int r=n;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		indicate();
		while(ok){
			for(int i=1;i<=n;i++){
				cout<<a[i];
			}
			cout<<endl;
			gen();
		}
	}
	return 0;
}
