#include <iostream>
using namespace std;
void xuat_mang (int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i];
		if(i!=n-1){
			cout<<" ";
		}
	}cout<<endl;
}
void insert_sort(int a[],int n){
	for(int i=1;i<n;i++){
		int chen =  a[i];
		int vitri = i-1;
		while(vitri>=0&&chen<a[vitri]){
			a[vitri+1]=a[vitri];
			vitri--;
		}
		a[vitri+1]=chen ;
		cout<<"Buoc "<< i+1 <<": ";
		xuat_mang(a,n);
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"Buoc 1: ";
	xuat_mang(a,n);
	insert_sort(a,n);

	return 0;
	
}
