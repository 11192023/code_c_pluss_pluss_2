#include<iostream>
using namespace std;
int  main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	long long sum_1 =0;long long sum_2=INT_MIN;
	for(int i=0;i<n;i++){
		sum_1+=a[i];
		sum_2=max(sum_1,sum_2);
		if(sum_1<0){
			sum_1=0;
		}
	}
	cout<<sum_2;
	return 0;
}
