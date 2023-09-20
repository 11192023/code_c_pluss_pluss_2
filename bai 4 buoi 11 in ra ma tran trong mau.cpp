#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++){
		for( int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Hinh 1:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hinh 2:"<<endl;
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hinh 3:"<<endl;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hinh 4:"<<endl;
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=0;j--){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
