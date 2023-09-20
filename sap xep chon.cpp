#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(int a[],int n){
	for(int i=0;i<n-1;i++){
		int min_pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(a[i],a[min_pos]);
	}
}
void bubblesort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
