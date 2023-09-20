#include<bits/stdc++.h>
using namespace std;



int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int h=-1;
	for(int i=0;i<n-1;i++){
		if((a[i]<=0 && a[i+1]>0) || (a[i]>=0 && a[i+1]<0)){
			if(h==i){
				cout<<a[i+1]<<" ";
				h=i+1;
			}
			else {
				cout<<a[i]<<" "<<a[i+1]<<" ";
				h=i+1;
			}
		}
		
	}
	
	 
}
