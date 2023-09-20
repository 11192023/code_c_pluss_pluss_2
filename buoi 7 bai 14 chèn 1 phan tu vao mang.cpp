
#include<iostream>
using namespace std;
void nhap_mang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<i<<endl;
		cin>>a[i];
	}
}
void xuat_mang(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}
void kt(int a[],int &n,int vt,int x){
	{
		for(int i =n-1;i>=vt;i--){
			a[i+1]=a[i];
		}int vt=x;
		n++;
	}
}
int main(){
	int a[100];
	int n;
	cin >>n;
	nhap_mang(a,n);
	xuat_mang(a,n);
	int x;
	int vt;
	cin>>x>>vt;
	kt(a,n,vt,x);
	
	xuat_mang(a,n);
	return 0;
	
	
}
