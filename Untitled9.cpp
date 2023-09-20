#include<iostream>
using namespace std;
void nhap_mang (int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	}
	void xuat_mang (int a[],int n){
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
	}
int main(){
	int n;
	cin>>n;
	int a[100];
	nhap_mang(a,n);
	xuat_mang (a,n);
	return 0
}
