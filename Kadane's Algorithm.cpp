#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int check (int a[],int n){
	int ans=a[0];
	for(int i=0;i<n;i++){
		int tmp=0;
		for(int j=i;j<n;j++){
			tmp+=a[j];
			ans=max(ans,tmp);
		}
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int result=check(a,n);
	cout<<result;
	return 0;
}
