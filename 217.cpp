#include<iostream>
using namespace std;
int first_position(int a[],int n,int x){
	int res=-1;
	int l=0;
	int r=n-1;
	while(l<r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			r=m-1;
		}else if(a[m]<x){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return res;
}
int last_position(int a[],int n,int x){
	int res=-1;
	int l=0;
	int r=n-1;
	while(l<r){
		int m=(l+r)/2;
		if(a[m]==x){
			res=m;
			l=m+1;
		}else if(a[m]<x){
			l=m+1;
		}else{
			r=m-1;
		}
	}
	return res;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=first_position(a,n,k);
	int r=last_position(a,n,k);
	if(l!=-1){
		cout<<r-l+1<<endl;
	}else{
		cout<<"not found";
	}
	return 0;
}
