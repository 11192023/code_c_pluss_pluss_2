#include<iostream>
using namespace std;
void check(int a[],int n){
	cin>>n;
	int cnt[100]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(cnt[a[i]]){
			cout<<a[i]<<endl;
			return;
		}
		cnt[a[i]]=1;
	}
	cout<<"-1";
}
int main(){
	int n;
	int a[100];
	check(a,n);
	return 0;
}
