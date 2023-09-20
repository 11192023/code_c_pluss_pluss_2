#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}

	int dem =0,res;
	for(int i=0;i<n;i++){
	     int cnt =1;
	     for(int j =i+1;j<n;j++){
	     	if(a[i]==a[j])cnt++;
		 }if(cnt>dem){
		 	dem =cnt;
		 	res =a[i];
		 }else if(cnt ==dem){
		 	if(res>a[i])res=a[i];
		 }
	     
	}cout<<res<<" "<<dem;
	return 0;
}
