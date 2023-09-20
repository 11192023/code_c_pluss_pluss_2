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
	int res=a[0];
	sort(a+1,a+n,greater<int>());
	for(int i=1;i<n;i++){
		if(k>0){
			res+=a[i];
		}else{
			res-=a[i];
		}
		k--;
	}
	cout<<res<<endl;
	return 0;
}
