#include<iostream>
#include<algorithm>
using namespace std;
int n,a[10000];
int main (){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	long long ans=0 ;//san luong sua thu duoc 
	for(int i=0;i<n;i++){
		if(a[i]>i){
			ans+=a[i]-i;
		}
		else break;
	}
	cout<<ans;
	return 0;

}
