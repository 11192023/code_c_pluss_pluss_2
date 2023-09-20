#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	int a[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]&&i<j){
				v.push_back({i,j});
			}
		}
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}
