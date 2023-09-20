#include<iostream>
#include<vector>
using namespace std;
const int mod =1000000007;
vector<int> fibo;
void check(int max){
	fibo.resize(max+1);
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<=max;i++){
		fibo[i]=(fibo[i-1]+fibo[i-2])%mod;
	}
}
int main(){
	check(1000000);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<fibo[n]<<endl;
	}
	return 0;
	
}
