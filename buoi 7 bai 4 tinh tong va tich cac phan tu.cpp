#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	long long tong =0;
	long long tich=1;
	for( int i=0;i<n;i++){
		a[i]%=1000000007;
		tong +=a[i];
		
		tich*=a[i];
		
		tong%=1000000007;
		tich%=1000000007;
	}cout<<tong<<endl<<tich;
	return 0;
}
