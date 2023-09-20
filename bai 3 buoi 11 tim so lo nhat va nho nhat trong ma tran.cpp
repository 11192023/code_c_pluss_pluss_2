#include<iostream>
#include<limits.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[100][100];
	int min_value=INT_MAX;
	int max_value=INT_MIN;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			min_value=min(min_value,a[i][j]);
			max_value=max(max_value,a[i][j]);
		}
	}
	cout<<min_value<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(min_value==a[i][j]){
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
	cout<<max_value<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(max_value==a[i][j]){
				cout<<i+1<<" "<<j+1<<endl;
			}
		}
	}
return 0;	
}
