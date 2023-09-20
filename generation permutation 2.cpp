#include<iostream>
using namespace std;
int n,a[1005];
void next(){
	int i=n-2;
	while(i>=0&&a[i]>a[i+1]){
		i--;
	}
	if(i==-1){
		for(int i=1;i<=n;i++){
			cout<<i<<" ";
		}
	}else{
		int j=n-1;
		while(a[i]>a[j])--j;
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		int l=i+1;
		int r=n-1;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
		for(int i=0;i<n;i++){
			 cout<<a[i]<<" ";
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		next();
	}
	return 0;
}
