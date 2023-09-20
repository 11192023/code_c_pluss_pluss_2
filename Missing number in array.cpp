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
}
int check(int a[],int n){
	bubble_sort(a,n);
	int result=0;
	for(int i=0;i<n;i++){
		if(a[i+1]-a[i]==2){
			result=a[i]+1;
		}
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int result=check(a,n);
	cout<<result;
	return 0;
}
