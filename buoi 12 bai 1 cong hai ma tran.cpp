#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[100][100],b[100][100],sum[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
		
    }
    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
	
}
