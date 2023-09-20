#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	cout<<"enter of the n for the array ";
	int n;
	cin>>n;
	int a[100];
    vector<int>v;
	for(int i=0;i<n;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	int x=0;int y=0;
	for(int i=0;i<v.size();i++){
		if(i%2==0)x=x*10+v[i];
		else y=y*10+v[i];
	}
	cout<<x+y<<endl;
	return 0;
}
