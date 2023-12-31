#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int l,int r,int m){
	vector<int>x(a+l,a+m+1);
	vector<int>y(a+m+1,a+r+1);
	int i=0;
	int j=0;
	while(i<x.size()&&j<y.size()){
		if(x[i]<=y[i]){
			a[l]=x[i];
			l++;
			i++;
		}else{
			a[l]=y[j];
			l++;
			j++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;
		i++;
	}while(j<y.size()){
		a[l]=y[j];
		l++;
		j++;
	}
}
void merge_sort(int a[],int l,int r){
	if(l>=r)return;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,r,m);
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
