#include<iostream>
#include<climits>
using namespace std;
int cnt[20001];
int main (){
	
	int n;
	cin>>n;
	int* a = new int[n];
	int m =INT_MIN;
	
	for(int i =0;i<n;i++){
		int x;
		cin>>x;
		cnt[x]++;
		m=max(m,x);
	}
	for(int i=0;i<=m;i++){
		if(cnt[i]!=0){
			for(int j=0;j<cnt[i];j++){
				cout<<i<<" ";
			}
		}
	}
	delete []a;
	return 0;
}
