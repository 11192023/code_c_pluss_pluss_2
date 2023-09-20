#include<iostream>
using namespace std;
int main(){
	int n,s;
	cin>>n>>s;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	int l=0,r;
	int ans=0;
	for(int r=0;r<n;r++){
		sum+=a[r];
		while(sum>=s){
			ans+=n-r;
			sum-=a[l];
			l++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
