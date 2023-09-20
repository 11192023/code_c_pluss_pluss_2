#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			sum+=a[i][j];
		}
	}
	cout<<sum;
	return 0;
}
