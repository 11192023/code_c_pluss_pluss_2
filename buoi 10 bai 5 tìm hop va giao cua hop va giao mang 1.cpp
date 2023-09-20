#include<iostream>
using namespace std;
int min(int a,int b){
	if(a>b)return b;
	return a;
}
int main(){
	int n,m;
	cin>>n>>m;
	int* a=new int[n];
	int* b=new int [m];
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i =0;i<m;i++)cin>>b[i];
	int* giao =new int[min(n,m)];
	int* hop = new int[n+m];
	int i=0,j=0,g=0,h=0;
	while(i<n&&j<m){
		if(a[i]==b[j]){
			giao[g]=a[i];
			hop[h]=a[i];
			++g;
			++h;
			++i;
			++j;
		}
		else if(a[i]>b[j]){
			hop[h++]=b[j++];
		}else 
		hop[h++]=a[i++];
	}
	while(i<n){
		hop[h++]=a[i++];
	}
	while(j<m){
		hop[h++]=b[j++];
	}
	

	for(int i=0;i<g;i++)cout<<giao[i]<<" ";
	cout<<endl;
	for(int i=0;i<h;i++)cout<<hop[i]<<" ";
	
	delete[]a;
	delete[]b;
	delete[]giao;
	delete[]hop;
	return 0;
	
}
