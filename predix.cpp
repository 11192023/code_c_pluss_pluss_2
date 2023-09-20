#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int pre[n+1]={0};
	for(int i=1;i<=n;i++){
		pre[i]=pre[i-1]+a[i];
	}
	int l,r;
	cin>>l>>r;
	cout<<pre[r]-pre[l-1]<<endl;
	return 0;
}
