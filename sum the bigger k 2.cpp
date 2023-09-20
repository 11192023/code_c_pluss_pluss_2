#include<iostream>
#include<algorithm>
using namespace std;
int first_Position(int a[],int l,int r,int x){
	int res=-1;
	while(l<=r){
		int m=(l+r)/2;
		if(a[m]>x){
			res=m;
			r=m-1;
		}else{
			l=m+1;
		}
	}
	return res;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=0;
	for(int i=0;i<n-1;i++){
		int l=first_Position(a,i+1,n-1,k-a[i]);
		if(l!=-1){
			ans+=n-l;
		}
	}
	cout<<ans;
	return 0;
}
