#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
    vector<int>b[n];
	int a[100][100];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]){
				b[i].push_back(j);
			}
		}
	}
    for(int i=1;i<=n;i++){
    	cout<<i<<":";
    	for(auto x:b[i]){
    		cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
