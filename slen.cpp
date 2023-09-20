#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int k){
	multiset<int>s;
	for(int i=0;i<k;i++){
		auto it=s.lower_bound(a[i]-k);
		if(it!=s.end()&&*it<=a[i]+k){
			return true;
		}
		s.insert(a[i]);
	}
	for(int i=k;i<n;i++){
		s.erase(s.find(a[i-k]));
		auto it=s.lower_bound(a[i]-k);
		if(it!=s.end()&&*it<=a[i]+k){
			return true;
		}
		s.insert(a[i]);
	}
	return false;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(check(a,n,k))cout<<"1"<<endl;
	else cout<<"0"<<endl;
	return 0;
}