#include<iostream>
using namespace std;
void xuat_mang (int a[],int n){
	for(int i =0;i<n;i++){
		cout<<a[i];
		if(i!=n-1){
			cout<<" ";
		}
	}cout<<endl;
}
void interchange_sort(int a[],int n){
	for(int i =0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i]>a[j]){
			
			int temp = a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		}cout<<"Buoc "<< i+1<<": ";
		xuat_mang(a,n);
}
	
}
int main(){
	int a[1000];
	int n;
	cin>>n;
	for(int i;i<n;i++){
		cin>>a[i];
	}
	interchange_sort(a,n);
	return 0;
}
