#include<iostream>
using namespace std;
int  main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool flag=true;
	for(int i=0;i<n-1;i++){
		if(flag==true){
	    if(a[i]>a[i+1]){
			swap(a[i],a[i+1]);
		}
		}else{
			if(a[i]<a[i+1]){
			swap(a[i],a[i+1]);
		}
	}
	flag=!flag;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
