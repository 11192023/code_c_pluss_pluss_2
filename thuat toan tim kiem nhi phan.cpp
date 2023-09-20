#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(int a[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
bool binary_search(int a[],int l,int r,int x){
	if(l>r){
		return false;
	}
	int mid=(l+r)/2;
	if(a[mid]==x){
		return true;
	}
	else if(a[mid]<x){
		return binary_search(a,mid+1,r,x);
	}
	else{
		return binary_search(a,l,mid-1,x);
	}
}
int main(){
	int n,x;
	cin>>n>>x;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
	if(binary_search(a,0,n-1,x)){
		cout<<"tim thay so "<<x<<endl;
	}
	else {
		cout<<"khong tim thay "<<x<<endl;
	}
	return 0;
}
