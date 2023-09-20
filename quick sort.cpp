#include<iostream>
using namespace std;
int patition(int a[],int l,int r){
	int p =a[r];
	int i=l-1;
	for(int j=l;j<r;j++){
		if(a[j]<=p){
			i=i+1;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[i],a[r]);
	return i;
}
void quick_sort(int a[],int l,int r){
	if(l<r){
	int p=patition(a,l,r);
	quick_sort(a,l,p-1);
	quick_sort(a,p+1,r);
}
}
int partition1(int a[],int l,int r){
	int p=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++;
		}while(a[i]<p);
		do{
			j--;
		}while(a[j]>p);
		if(i<j){
			swap(a[i],a[j]);
		}else{
			return j;
		}
	}
}
void quick(int a[],int l,int r){
	if(l<r){
		int p=partition1(a,l,r);
		quick(a,l,p);
		quick(a,p+1,r);
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
