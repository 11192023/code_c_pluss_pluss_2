#include<iostream>
using namespace std;
void nhap(int *&p,int&n){
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
}
void xuat(int *p,int n){
	 for(int i=0;i<n;i++){
	 	cout<<p[i]<<" ";
	 }
}
int main(){
	int *p;
	int n;
	nhap(p,n);
	xuat(p,n);
	delete[]p;
	return 0;
	
}
