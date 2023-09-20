#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	map<int ,int> mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mp.find(a[i][j])==mp.end()||mp[a[i][j]]==i){
				mp[a[i][j]]++;
			}
		}
	}
	bool found =false;
	for(auto it : mp){
		if(it.second==n){
			cout<<it.first<<" ";
			found =true;
		}
	}
	if(!found){
		cout<<"NOT FOUND";
	}
	return 0;
}
