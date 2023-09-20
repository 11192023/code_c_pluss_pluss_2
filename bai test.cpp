#include<iostream>
using namespace std;
int count(int n){
	int cnt=0;
	while(n){
		int r=n%10;
		if(r%2!=0){
		cnt++;	
		}
		n/=10;
	}
	return cnt;
}
void f1(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(count(a[j])>count(a[j+1])||count(a[j])==count(a[j+1])&&a[j]>a[j+1]){
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	f1(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
