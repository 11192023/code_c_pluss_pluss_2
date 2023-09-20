#include<iostream>
using namespace std;
int min(int a,int b){
	if(a<b)return a;
	return b;
}
int main(){
	int n,s;
	cin>>n>>s;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum=0;
	int l=0,r;
	int ans=INT_MAX;
	for(int r=0;r<n;r++){
		sum+=a[r];
		while(sum>=s){
			ans=min(ans,r-l+1);
			sum-=a[l];
			l++;
		}
	}
	if(ans==INT_MAX){
		cout<<"-1";
	}else{
		cout<<ans<<endl;
	}
}
