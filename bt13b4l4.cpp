#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int tn(int n){
	int rev=0;
	while (n){
		rev =rev*10+n%10;
		n/=10;
	}return rev;
}
int check(int n){
	int ans=0;
	for(int i=2;i<=sqrt (n);i++){
		int cnt =0;
		while(n%i==0){
			cnt++;
			n/=10;
		}if(cnt!=0)ans++;
	}if(n!=1)ans++;
	return ans>=3;
}
int main(){
	int a,b;
	cin>>a>>b;
	int h =0;
	for(int i =a;i<=b;i++){
		if(check(i)&&tn(i)){
			cout<<i<<" ";
			h =1;
		}
	}if(!h)cout<<"-1";
	return 0;

}
