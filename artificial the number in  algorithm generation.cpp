#include<iostream>
using namespace std;
int n,a[100],ok,cnt;
void indicate(){
    cnt=1;
    a[1]=n;
}
void gen(){
	int i=cnt;
	while(i>=1&&a[i]==1){
		i--;
	}
	if(i==0){
		ok=0;
	}else{
		a[i]--;
		int d=cnt-i+1;
		cnt=i;
		int q=d/a[i];
		int r=d%a[i];
		if(q){
			for(int j=1;j<=q;j++){
				cnt++;
				a[cnt]=a[i];
			}
		}if(r){
			cnt++;
		    a[cnt]=r;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		indicate();
		while(ok){
			cout<<"(";
			for(int i=1;i<=cnt;i++){
				cout<<a[i];
				if(i!=cnt){
					cout<<" ";
				}
			}
			cout<<")";
			cout<<endl;
			gen();
		}
	}
	return 0;
}