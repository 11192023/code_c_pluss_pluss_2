#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(int i=2;i<=n;i+=2){
		int cmp=a[i];
		a[i]=a[i-1];
		a[i-1]=cmp;
	}
}
int main(){
	cout<<"enter of the size for array:"<<endl;
	int n;
	cin>>n;
	int a[100];
	cout<<"enter of the element for array:"<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}