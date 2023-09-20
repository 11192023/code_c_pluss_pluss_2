#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int res;
vector<int>a;
map<long long ,bool>d;
int u[100];
void tri(int i,int n){
	for(int j=0;j<=1;j++){
		u[i]=j;
		if(i==n-1){
			long long ans=0;
			for(int i=0;i<n;i++){
				if(u[i]==1){
					ans=ans*10+a[i];
				}
			}
			if(d[ans]==true&&ans!=0&&res<ans){
				res=ans;
			}
		}else{
			tri(i+1,n);
		}
	}
}
int main(){
	for(int i=1;i<1000000;i++){
		d[i*i*i]=true;
	}
	cout<<"the testcase: ";
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		a.clear();
		while(n){
		a.push_back(n%10);
		n/=10;	
		}
		reverse(a.begin(),a.end());
		 res=-1;
		tri(0,a.size());
		cout<<res<<endl;
	}
	return 0;
}
