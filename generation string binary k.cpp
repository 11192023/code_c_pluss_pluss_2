#include<iostream>
using namespace std;
int n,k,a[100],ok;
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
	}
	if(i==0){
		ok=0;
	}else{
		a[i]=1;
	}
}
bool check(){
	int cnt =0;
	for(int i=1;i<=n;i++){
		cnt+=a[i];
	}
    return cnt==k;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		ok=1;
		indicate();
		while(ok){
			if(check()){
				for(int i=1;i<=n;i++){
					cout<<a[i];
				}
				cout<<endl;
			}
			gen();
		}
	}
	return 0;
}
