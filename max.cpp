#include<iostream>
#include<algorithm>
using namespace std;
const long long mod=1e9+7;
int main(){
	cout<<"the number of the quantity"<<endl;
	int n;
	cin>>n;
	int a[100];
	long long max=0;
	for(int i=0;i<n;i++){
		cout<<"the number "<<i+1<<": ";
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		max+=a[i]*i;
		max%=mod;
	}
	cout<<max%mod<<endl;
	return 0;
}
