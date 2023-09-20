#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,x[100],col[100],d1[100],d2[100],cnt;
int a[100][100];
void result(){
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++){
		a[i][x[i]]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
void tri(int i){
	for(int j=1;j<=n;j++){
		if(col[j]==1&&d1[i-j+n]==1&&d2[i+j-1]==1){
			x[i]=j;
			col[j]=0;d1[i-j+n]=0;d2[i+j-1]=0;
			if(i==n){
				result();
				cnt++;
			}else{
				tri(i+1);
			}
			col[j]=1;d1[i-j+n]=1;d2[i+j-1]=1;
		}
	}
}
int main(){
	cin>>n;
	for(int i=0;i<=99;i++){
		col[i]=d1[i]=d2[i]=1;
	}
	tri(1);
	cout<<cnt;
	return 0;
}
