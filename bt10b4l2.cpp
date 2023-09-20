#include<iostream>
#include<cmath>
using namespace std;
int solve(int n, int k){
	int cnt =0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while (n%i==0){
				n/=i;
			cnt++;
				if(cnt==k)return i;
			}
		}
	}if(n!=1){
		cnt++;
		if(cnt==k){
			return n;
			
			
		}
	}return -1;
}
int main(){
	int n,k;
	cin>>n >>k;
	int a=solve(n,k);
	if(a==-1){
		cout<<"-1"<<endl;
	}else{cout<<a<<endl;
	}
	return 0;
}
