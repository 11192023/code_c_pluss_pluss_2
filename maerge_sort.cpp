#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int l ,int r,int m){
	vector<int>b(a+l,a+m+1);
	vector<int>c(a+m+1,a+r+1);
	int i=0;
	int j=0;
	while(i<b.size()&&j<c.size()){
		if(b[i]<c[j]){
			a[l]=b[i];
			i++;
			l++;
		}else{
			a[l]=c[j];
			l++;
			j++;
		}
	}
	while(i<b.size()){
		a[l]=b[i];
		l++;
		i++;
	}while(j<c.size()){
		a[l]=c[j];
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
