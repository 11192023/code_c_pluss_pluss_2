#include<iostream>
using namespace std;
int cnt[1000001]={0};
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int dem =0,res;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>dem){
			dem =cnt[a[i]];
			res=a[i];
		
		}
	}cout<<res<<" "<<dem;
	return 0;
}
