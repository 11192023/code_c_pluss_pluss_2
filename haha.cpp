#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
	int tmp=a[min];
		a[min]=a[i];
		a[i]=tmp;
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
