#include<iostream>
#include<map>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[100];
     map<int,int>mp;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	mp[a[i]]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=mp[k-a[i]];
		cout<<ans<<endl;
		if(a[i]*2==k){
			ans--;
		}
	}
	cout<<ans/2;
	return 0;
}
