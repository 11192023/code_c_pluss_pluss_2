#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

		int n;
		cin>>n;
		int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int l=0;
		int r=n-1;
		while(l<=r){
			if(l==r){
				cout<<a[l]<<" ";
			}
			else{
				cout<<a[r]<<" "<<a[l]<<" ";
			}
			l++;
			r--;
		}
		cout<<endl;
	return 0;
}
