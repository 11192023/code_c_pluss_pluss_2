#include<iostream>
#include<set>
using namespace std;
int n,k,a[100],cnt;
set<int>h;
void next(){
	int i=k;
	while(i>=1&&a[i]==n-k+i){
		i--;
	}
	if(i==0){
		cout<<k<<endl;
	}else{
		a[i]++;
		for(int j=i+1;j<=k;j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
			cout<<a[i]<<" ";
			h.insert(a[i]);
		}
		cout<<endl;
		next();
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
			if(h.find(a[i])==h.end()){
				cnt++;
			}
		}
		cout<<endl;
		cout<<cnt;
		h.clear();
	}
	return 0;
}
