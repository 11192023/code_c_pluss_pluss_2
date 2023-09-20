#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int> count(int a[],int n){
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		mp[a[i]]++;
	}
	return mp;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
	   cin>>a[i];	
	}
	unordered_map <int,int> counts = count (a, n);
	for(unordered_map<int,int> :: iterator it=counts.begin();it!=counts.end();it++){
		cout<<it->first<<"("<<it->second<<")"<<" ";
	}
	return 0;
	
}