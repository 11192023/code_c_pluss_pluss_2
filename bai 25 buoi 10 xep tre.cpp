#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int cnt=0;
	int baby_left= 0;
	int baby_right=n-1;
	while (baby_left<=baby_right){
		if(a[baby_left]+a[baby_right]<=m){
			cnt++;
			baby_left++;
			baby_right--;
		}
		else{
			cnt++;
			baby_right--;
		}
	}
	cout<<cnt;
	return 0;
	
}
