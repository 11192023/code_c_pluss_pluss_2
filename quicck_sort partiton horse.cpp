#include<iostream>
using namespace std;
int partition(int a[],int l,int r){
	int pivot=a[l];
	int i=l-1;
	int j=r+1;
	while(1){
		do{
			i++;
		}while(a[i]<pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j){
			swap(a[i],a[j]);
		}else{
			return j;
		}
	}
}
void quick_sort(int a[],int l,int r){
	if(l>=r)return ;
	int q=partition(a,l,r);
	quick_sort(a,l,q);
	quick_sort(a,q+1,r);
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
