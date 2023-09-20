#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int a[1000001];
int main(){

		int n,k;
		cin>>n>>k;
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		ll cnt=0;
		for(int i=0;i<n;i++){
			cnt+=mp[k-a[i]];
			if(a[i]*2==k){
				--cnt;
			}
		}
		cout<<cnt/2<<endl;
	return 0;
}
