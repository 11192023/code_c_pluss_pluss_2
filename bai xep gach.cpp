#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n,greater<int>());
	int first =1;
	int do_cung=a[0];
	for(int i=1;i<n;i++){
		if(do_cung>=1){
			++first;
			do_cung=min(do_cung-1,a[i]);
		}
		else break;
	}
	cout<<first;
	return 0;
}
