#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int n,k,a[100];
int mt[100][100];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)cin>>mt[i][j];
	}
	for(int i=1;i<=n;i++){
		a[i]=i;
		//cout<<a[i]<<" ";
	};
	cout<<endl;
	vector<vector<int>>v;
	do{
		/*for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<mt[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;*/
/*note	for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;*/
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=mt[i][a[i]];
		}
	//	cout<<sum<<" ";
	//	cout<<endl;
		if(sum==k){
			vector<int>tmp(a+1,a+n+1);
			v.push_back(tmp);
		}
	}while(next_permutation(a+1,a+n+1));
	cout<<v.size()<<endl;
	for(vector<int>it:v){
		for(int x:it){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
