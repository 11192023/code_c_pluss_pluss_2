#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	int m;
	int k;
	cin>>n>>m>>k;
	int a[n];
	int b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	sort(b,b+);
	int cnt =0;
	//bay gio minh se duyet 1 vong for de kiem tra tung nguoi
	for(int i=0, j=0;i<n&&j<m;i++){
		while(j<m&&(a[i]<b[j]-k||a[i]>b[j]+k)){
			j++;
		}
		if(j<m&&(a[i]>=b[j]-k||a[i]<=b[j]+k)){
			cnt++;
			j++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
