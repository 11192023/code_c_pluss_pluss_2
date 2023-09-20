#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[100];
	int sum1=0;
	int sum2=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int j=0;
	while(j<n){
		if(j<k)sum1+=a[j];
		else sum2+=a[j];
		j++;
	}
	int res=abs(sum1-sum2);
	j=0;
	sum1=0;
	sum2=0;
	while(j<n){
		if(j<n-k)sum1+=a[j];
		else sum2+=a[j];
		j++;
	}
    res+=max(res,abs(sum1-sum2));
    cout<<res;
	return 0;
}
