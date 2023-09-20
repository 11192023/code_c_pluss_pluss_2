#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100][100];
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		string token;
		while(ss>>token){
			a[i][stoi(token)]=1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
