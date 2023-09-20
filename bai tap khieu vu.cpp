#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >>nm;
	int a[n];
	int b[m];
	for(int i =0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int i=0;
	int j=0;
	int ans=0;
	while (i<=n&&j<=m)
	if(a[i]<a[j]){
		i++;
	}
	else{
		ans++;
		i++;
		j++;
		
	}
	cout<<ans;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005];
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=m;i++) cin>>b[i];
    sort(a+1,a+n+1,greater<int>());
    sort(b+1,b+m+1,greater<int>());
    int i=1,j=1,ans=0;
    while(i<=n && j<=m){
        if(a[i]>b[j]){
            i++;
            j++;
            ans++;
        }
        else j++;
    }
    cout<<ans;
    return 0;
}

