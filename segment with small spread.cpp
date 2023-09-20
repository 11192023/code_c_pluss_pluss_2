#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	multiset<long long>ms;
	int l=0,r;
	int ans =0;
	for(int r=0;r<n;r++){
		ms.insert(a[r]);
		while(*ms.rbegin()-*ms.begin()>k){
			auto it=ms.find(a[l]);
			ms.erase(it);
			l++;
		}
		ans+=r-l+1;
	}
	cout<<ans<<endl;
	return 0;
	
}
