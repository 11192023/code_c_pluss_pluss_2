#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	int b[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]*b[i];
	}
	cout<<sum<<endl;
	return 0;
}