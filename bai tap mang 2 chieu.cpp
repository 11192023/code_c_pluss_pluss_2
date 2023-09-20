#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	
	
	for(int i=0;i<r;i++){
		int sum_ro =0;
		for(int j=0;j<c;j++){
			sum_ro+=a[i][j];
		}
		cout<<sum_ro<<" ";
	}
	cout<<endl;
	
	for(int i=0;i<c;i++){
		int sum_co =0;
		for(int j=0;j<r;j++){
			sum_co+=a[j][i];
		}
		cout<<sum_co<<" ";
	}
	return 0;
	
}
