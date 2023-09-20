#include<iostream>
#include<algorithm>
using namespace std;
struct job{
	char id;
	int deadline;
	int profit;
};
job a[100];
int f[1000]={0};
bool cmp(job a,job b){
	return a.profit>b.profit;
}
int  main(){
	cout<<"input of the t: ";
	int t;
	cin>>t;
	while(t--){
		int n;
		cout<<"input of the n: ";
		cin>>n;
		for(int i=0;i<n;i++){
			cout<<"the job "<<i+1<<endl;
			cout<<"id ";
			cin>>a[i].id;
			cout<<"deadline ";
			cin>>a[i].deadline ;
			cout<<"profit ";
			cin>>a[i].profit;
		}
		sort(a,a+n,cmp);
		int result[n];
		for(int i=0;i<n;i++){
			for(int j=min(n,a[i].deadline)-1;j>=0;j--){
				if(f[j]==0){
					f[j]=1;
					result[j]=i;
					break;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(f[i]){
				cout<<a[result[i]].profit<<" ";
			}
		}
	}
	return 0;
}
