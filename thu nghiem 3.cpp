#include<iostream>
using namespace std;
int const MAX =1000;
int main(){
	int n,k,j=0,cnt=0;
	cin>>n>>k;
	int a[MAX];
	int b[MAX];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=k){
			b[j]=a[i];
			
			j++;
			
			
		}
	}for(int i=0;i<j;i++){
		for(int t=i+1;t<j;t++){
			if(b[i]+b[t]==k){
				cnt++;
			}
		}
	}cout<<cnt;
	return 0;
}

