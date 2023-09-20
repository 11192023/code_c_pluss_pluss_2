#include<bits/stdc++.h>
using namespace std;
const int mod =1e9+7;
typedef long long ll;
long long pow(long long a,long long b){
	long long res =1;
	for(int i=1;i<=b;i++){
		res *=a;
		res%=mod;
		
	}return res%mod ;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
	
	
}
