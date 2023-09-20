#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	int ok =0;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x==k){
			ok =1;
		}
		
	}
	if(ok ==1)cout<<"YES";
	else cout<<"NO";
	return 0;
}
