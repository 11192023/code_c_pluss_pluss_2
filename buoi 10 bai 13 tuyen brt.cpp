#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int cmp(const void*a,const void*b){
	int *x=(int*)a;
	int *y=(int*)b;
	return *x-*y;
}
int main (){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	qsort(a,n,sizeof(int),cmp);
	int count =0;//dem so tuyen xe co cung quang dung do
	int res =INT_MAX;//so ki luc ve khoang cach
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]<res){
			res =a[i]-a[i-1];
			count=1;
		}
		else if(a[i]-a[i-1]==res){
			count++;
		}
	}
	cout<<res<<" "<<count;
	return 0;
}
