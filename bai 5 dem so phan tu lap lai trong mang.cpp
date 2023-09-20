#include<iostream>
using namespace std;
int cnt[1000001];
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(cnt[a[i]]>=2)ans++;
	}
  cout<<ans<<endl;
  return 0;
}
