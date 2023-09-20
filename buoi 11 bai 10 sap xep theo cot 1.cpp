#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int j =0;j<n;j++){
		for(int i=0;i<n-1;i++){
			int min_val=i;
			for(int k=i+1;k<n;k++){
				if(a[k][j]<a[min_val][j]){
					min_val=k;
				}
			}
			if(min_val!=i){
				swap(a[min_val][j],a[i][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
