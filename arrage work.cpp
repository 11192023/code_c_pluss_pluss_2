#include<iostream>
#include<algorithm>
using namespace std;
int n;
struct job{
	char id;
	int deadline;
	int profit;
};
job a[100];
int cnt[1005]={0};
bool cmp(job a,job b){
	return a.profit>b.profit;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i].id>>a[i].deadline>>a[i].profit;
		}
		sort(a,a+n,cmp);
		int count=0;
		int res=0;
		for(int i=0;i<n;i++){
			while(cnt[a[i].deadline]&&a[i].deadline>0)a[i].deadline-=1;
			if(!cnt[a[i].deadline]&&a[i].deadline>0){
				cnt[a[i].deadline]=1;
				res+=a[i].profit;
				count++;
			}
		}
		cout<<count<<" "<<res;
		cout<<endl;
	}
	return 0;
}
