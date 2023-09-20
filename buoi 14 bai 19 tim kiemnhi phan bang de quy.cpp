#include<iostream>
using namespace std;
bool binarysearch(int a[],int left,int right,int x){
	if(left>right){
		return false;
	}
	int mid=left+(right-left)/2;
	if(a[mid]==x){
		return true;
	}
	if(a[mid]>x){
		return binarysearch(a,left,mid-1,x);
	}
	else{
		return binarysearch(a,mid+1,right,x);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		bool found=binarysearch(a,0,n-1,x);
		if(found){
			cout<<" YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
