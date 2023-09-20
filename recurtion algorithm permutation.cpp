#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,a[100],used[100];
void result(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<endl;
}
void tri(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				result();
			}else{
				tri(i+1);
			}
			used[j]=0;
		}
	}
}
int main(){
	cin>>n;
	memset(used,0,sizeof(used));
	tri(1);
	return 0;
}
