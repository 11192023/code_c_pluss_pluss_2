#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			
		}
	}
}
void merge(int a[],int l,int m,int r){
	const int max=100;
	int b[max];
	int count=0;
	for(int i=l;i<m+1;i++){
		b[count]=a[i];
		count++;
	}
	const int max_1=100;
	int c[max_1];
	int cnt=0;
	for(int i=m+1;i<r+1;i++){
		c[cnt]=a[i];
		cnt++;
	}
	int i=0;
	int j=0;
	while(i<count&&j<cnt){
		if(b[i]<=c[j]){
			a[l]=b[i];
			i++;
			l++;
		}else{
			a[l]=c[j];
			j++;
			l++;
		}
	}
	while(i<count){
		a[l]=b[i];
		i++;
		l++;
	}
	while(j<cnt){
		a[l]=c[j];
		j++;
		l++;
	}
}
void merge_sort(int a[],int l,int r){
	if(l>=r)return ;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,m,r);
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	merge_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
