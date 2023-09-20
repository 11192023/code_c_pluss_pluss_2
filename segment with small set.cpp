#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[1001];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int dem[1001]={0};
	int cnt=0;
	int ans=0;
	int l=0,r;
	for(r=0;r<n;r++){
		dem[a[r]]++;
		if(dem[a[r]]==1)cnt++;
		while(cnt>k){
			if(dem[a[l]]==1)cnt--;
			dem[a[l]]--;
			l++;
		}
		ans+=r-l+1;
	}
	cout<<ans<<endl;
	return 0;
}
