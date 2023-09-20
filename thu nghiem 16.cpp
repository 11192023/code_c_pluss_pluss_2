#include<iostream>
using namespace std;
void xuat_mang (int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i];
		}
		cout<<endl;
}
void interchange_sort(int a[],int n){
	for(int i =0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i]>a[j]){
			
			int temp = a[j];
			a[j]=a[i];
			a[i]=temp;
	
		}
	}
}
	
}
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	interchange_sort(a,n);
	xuat_mang(a,n);
	return 0;
}
