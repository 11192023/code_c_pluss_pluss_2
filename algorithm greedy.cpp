#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
	return a.second<b.second;
}
int main(){
	vector<pair<int,int>>v(3);
	int w;
	cin>>w;
	for(int i=0;i<3;i++){
		int x;
		cin>>x;
		int a;
		cin>>a;
		v[i].first=x;
		v[i].second=a;
	}
	sort(v.begin(),v.end(),cmp);
	int profit=0;
	for(int i=0;i<v.size();i++){
		if(v[i].second<=w){
			w-=v[i].second;
			profit+=v[i].first;
		}else{
			profit+=v[i].first/v[i].second*w;
			break;
		}
	}
	cout<<profit;
	return 0;
}
