#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n,k;
    	cin>>n>>k;
    	int a[100];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		long long sum=0;
		for(int i=0;i<k;i++){
			sum+=a[i];
		}
		int res=sum;
		int idx=0;
		for(int i=k;i<n;i++){
			sum=sum-a[i-k]+a[i];
			if(sum>res){
				res=sum;
				idx=i-k+1;
			}
		}
		cout<<res<<endl;
		for(int i=0;i<k;i++){
			cout<<a[idx+i]<<" ";
		}
	}
	return 0;
}
