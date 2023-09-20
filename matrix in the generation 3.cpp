#include<bits/stdc++.h>
#include<vector>
using namespace std;
int n,k,a[100],ok;
int mt[100][100];
void gen(){
	int i=n-1;
	while(i>=1&&a[i]>=a[i+1]){
		i--;
	}if(i==0){
		ok=0;
	}
	else{
		int j=n;
		while(a[i]>=a[j])--j;
		int tmp=a[i];
		a[i]=a[j];
		a[j]=tmp;
		int l=i+1;
		int r=n;;
		while(l<r){
			int tmp=a[l];
			a[l]=a[r];
			a[r]=tmp;
			l++;
			r--;
		}
	}
}
int main(){
	cin>>n>>k;
	ok=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mt[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	vector<vector<int>>v;
	while(ok){
		int sum=0;
		for(int i=1;i<=n;i++){
			sum+=mt[i][a[i]];
		}
		if(sum==k){
			vector<int>tmp(a+1,a+n+1);
			v.push_back(tmp);
		}
		gen();
	}
    cout<<v.size()<<endl;
    for(vector<int> it:v){
    	for(int x:it){
    		cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
