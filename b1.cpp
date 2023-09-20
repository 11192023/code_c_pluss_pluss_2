#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int b[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,cnt=0;
	while(i<n&&j<m){
		if(a[i]>=b[j]-k&&a[i]<=b[j]+k){
			i++;
			j++;
			cnt++;
		}
		else if(b[j]-k>a[i]){
			i++;
		}
		else{
			j++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
