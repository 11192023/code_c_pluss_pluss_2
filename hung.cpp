#include<iostream>
using namespace std;
void headify(int a[],int n,int i){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<n&&a[left]>a[largest]){
		largest=left;
	}
	if(right<n&&a[right]>a[largest]){
		largest=right;
	}
	if(i!=largest){
		swap(a[largest],a[i]);
		headify(a,n,largest);
	}
}
void head_sort(int a[],int n){
	for(int i=(n-1)/2;i<n;i++){
	  headdify(a,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);
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
