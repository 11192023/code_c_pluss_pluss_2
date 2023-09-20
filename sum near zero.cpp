#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int min(int a,int b){
	if(a<b)return a;
	return b;
}
bool cmp(pair<int,int>a,pair<int,int>b){
	if(abs(a.first)!=abs(b.first)){
		return abs(a.first)<abs(b.first);
	}return a.second<b.second;
}
int main(){
	int n;
	cin>>n;
	int a[100];
	vector<pair<int,int>>v(n);
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v[i].first=x;
		v[i].second=i;
	}
	sort(v.begin(),v.end(),cmp);
	int res,sum=INT_MAX;
	int idx;
	for(int i=1;i<n;i++){
		int tmp=abs(v[i].first+v[i-1].first);
		if(tmp<sum){
			sum=tmp;
			res=v[i].first+v[i-1].first;
			idx=min(v[i].second,v[i-1].second);
		}else if(tmp==sum){
			if(idx>min(v[i].second,v[i-1].second)){
				res=v[i].first+v[i-1].first;
				idx=min(v[i].second,v[i-1].second);
			}
		}
	}
	cout<<res<<endl;
	return 0;
}
