#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct data{
	int first;
	int second;
};
data h[100];
bool cmp(data a,data b){
	return a.first<a.first;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>h[i].first;
	}
	for(int i=0;i<n;i++){
		cin>>h[i].second;
	}
	sort(h,h+n,cmp);
	int count=1;
	int i=0;
	for(int j=1;j<n;i++){
		if(h[j].first>=h[i].second){
			count++;
			i=j;
		}
	}
	cout<<count<<endl;
	return 0;
}
	
