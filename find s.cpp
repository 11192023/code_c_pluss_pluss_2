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
	int l=0,r,ans=0;
	for(int r=0;r<n;r++){
		sum+=a[r];
		if(sum>s){
			sum-=a[l];
			l++;
		}
		ans=max(ans,r-l+1);
	}
	cout<<ans;
	return 0;
}
