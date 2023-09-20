#include<iostream>
#include<cmath>
using namespace std;
int tn(int n){
	int rev=0;
	while (n){
		rev =rev*10+n%10;
		n/=10;
	}return rev;
}
bool is_prime(int n){
	if(n<2)return false;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}
int check(int n){
	int ans=0;
	for(int i=2;i<=9;i++){
		int cnt =0;
		while(n%i==0){
			cnt++;
			n/=10;
		}if(cnt!=0&&is_prime(i))ans++;
	}if(n!=1)ans++;
	return ans>=3;
}
int main(){
	long long a,b;
	cin>>a>>b;
	bool found =false;
	for(int i =a;i<=b;i++){
		if(tn(i)&&check(i)){
			cout<<i<<" ";
			found =true;
		}
		if(found&&i==b)break;
	}if(!found)cout<<"-1";
	return 0;

}
