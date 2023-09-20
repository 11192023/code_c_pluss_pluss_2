#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first;
		v[i].second=i;
	}
	sort(v.begin(),v.end());
	int l=0;
	int r=n-1;
	int sum=0;
	while(l<r){
		sum=v[l].first+v[r].first;
		if(sum==k){
			cout<<v[l].second+1<<" "<<v[r].second+1<<endl;
			return 0;
		}else if(sum<k){
			l++;
		}else{
			r++;
		}
	}
	cout<<"inpossible!"<<endl;
	return 0;
}
