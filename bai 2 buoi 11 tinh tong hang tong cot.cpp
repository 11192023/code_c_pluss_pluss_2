#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[200][200];
	for(int i=0;i<n;i++){
		for(int j =0;j<m;j++){
			cin>>a[i][j];
		}
	}
		for(int i=0;i<n;i++){
			long long sum_1=0;
			for(int j=0;j<m;j++){
				sum_1+=a[i][j];
			}
		cout<<sum_1<<" ";
		}
		cout<<endl;
		for(int i=0;i<m;i++){
			long long sum_2=0;
			for(int j=0;j<n;j++){
				sum_2+=a[j][i];
			}
			cout<<sum_2<<" ";
		}
		return 0;
	
}

