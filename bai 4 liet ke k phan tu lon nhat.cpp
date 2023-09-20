#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=k-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
	
	
}
