#include<iostream>
using namespace std;
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
bool check(){
	if(a[1]==0||a[n]==1){
		return false;
	}
	for(int i=1;i<=n-1;i++){
		if(a[i]==1&&a[i+1]==1){
			return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		ok=1;
		indicate();
		while(ok){
			if(check()){
				for(int i=1;i<=n;i++){
					if(a[i]==0){
						cout<<"A";
					}else{
						cout<<"H";
					}
				}
				cout<<endl;
			}
			gen();
		}
	}
	return 0;
}
