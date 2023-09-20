#include<iostream>
#include<cmath>
using namespace std;
int min(int a,int b){
	if(a<b)return a;
	return b;
}
int n,a[100],ok;
void indicate(){
	for(int i=1;i<=n;i++){
		a[i]=0;
	}
}
void gen(){
	int i=n;
	while(i>=1&&a[i]==1){
		a[i]=0;
		i--;
	}if(i==0){
		ok=0;
	}else{
		a[i]=1;
	}
}
int main(){
	cin>>n;
	int w[n+1];
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	ok=1;
	indicate();
	int ans=INT_MAX;
	while(ok){
		int sum1=0;
		int sum2=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				sum1+=w[i];
			}else{
				sum2+=w[i];
			}
		}
		ans=min(ans,abs(sum1-sum2));
		gen();
	}
	cout<<ans;
	return 0;
}
