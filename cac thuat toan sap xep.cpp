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
void insectionsort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int pos=i-1;
		while(pos>=0&&x<a[pos])
		{
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
	}
}
int cnt[10000001];
int main(){
	int n;
	cin>>n;
	int a[1000];
	int m=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
		m=max(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				cout<<i<<" ";
			}
		}
	}
	return 0;
}
