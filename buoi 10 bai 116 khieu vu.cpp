#include<iostream>
#include<algorithm>
using namespace std;
int n,m, a[100005],b[100005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	sort(a+1,a+n+1,greater<int>());
	sort(b+1,b+m+1,greater<int>());
	int i=1;int j=1;int ans=0;
	while(i<=n&&j<=m){
		if(a[i]>b[j]){
			ans++;
			i++;
			j++;
		}else{
			j++;
		}
	}
	cout<<ans;
	return 0;
}
