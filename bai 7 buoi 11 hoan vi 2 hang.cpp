#include<iostream>
using namespace std;
int main(){
	int n,u,v;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j =0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cin>>u>>v;
	for(int j=0;j<n;j++){
		int temp =a[u-1][j];
		a[u-1][j]=a[v-1][j];
		a[v-1][j]=temp;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
