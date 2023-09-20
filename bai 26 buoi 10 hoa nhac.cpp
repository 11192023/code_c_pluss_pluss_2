#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<m;i++){
		cin>>b[i];
		auto it = upper_bound(a.begin(),a.end(),b[i]);
		if(it==a.begin()){
			cout<<"-1\n";
		}
		else{
			it--;
			cout<<*it<<"\n";
			a.erase(it);
		}
	}
	return 0;
	
}
