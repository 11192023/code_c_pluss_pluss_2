#include<iostream>
using namespace std;
void headify(int a[],int n,int i){
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&a[l]>a[largest]){
		largest=l;
	}
	if(r<n&&a[r]>a[largest]){
		largest=r;
	}
	if(largest!=i){
		int tmp=a[largest];
		a[largest]=a[i];
		a[i]=tmp;
		headify(a,n,largest);
	}
}
void head_sort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){
		headify(a,n,i);
	}
	for(int i=n-1;i>=0;i--){
		int tmp=a[0];
		a[0]=a[i];
		a[i]=tmp;
		headify(a,i,0);
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	head_sort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
