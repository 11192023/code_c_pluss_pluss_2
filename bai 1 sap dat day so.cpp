#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	map<int,bool>mp;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		mp[x]=true;
	}
	for(int i=0;i<n;i++){
		if(mp[i]){
			cout<<i<<" ";
		}
		else{
		    cout<<"-1"<<" ";	
		}
	}
	return 0;
}
