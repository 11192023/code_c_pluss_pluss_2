#include<iostream>
using namespace std;
void solve(int n){
	cout<<"0"<<" "<<"1"<<" ";
	long long fn1=0,fn2=1;
	for(int i =3;i<=n;i++){
		long long fn=fn1+fn2;
		cout<<fn<<" ";
		fn1=fn2;
		fn2=fn;
	}
}
int main(){
	
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	solve(n);
}
	
	return 0;
	
		
	
}
