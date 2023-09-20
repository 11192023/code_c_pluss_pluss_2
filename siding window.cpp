#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<=n-k;i++){
		int max=a[i];
		for(int j=0;j<3;j++){
			if(a[j+i]>max){
				max=a[j+i];
			}
		}
		cout<<max<<" ";
	}
	return 0;
}
