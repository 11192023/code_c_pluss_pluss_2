#include<iostream>
using namespace std;
void removedeplicate(int a[],int n){
	int newline=n;
	for(int i=0;i<newline;i++){
		for(int j=i+1;j<newline;j++){
			if(a[i]==a[j]){
				for(int k=j;k<newline-1;k++){
					a[k]=a[k+1];
				}
				newline--;
				j--;
			}
		}
	}
	for(int i=0;i<newline;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	cout<<"enter of the size for the array "<<endl;
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	removedeplicate(a,n);
	return 0;
}