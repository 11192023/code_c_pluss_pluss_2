#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
 bool tn(int n){
	int m=n;
	int sum =0;
	while(n){
		sum=sum*10+n%10;
		
		n/=10;
	}return sum==m;
}
int check(int n){
	int cnt=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while (n%i==0){
				n/=i;
			}cnt++;
		}
	}if(n!=1)cnt++;
	return cnt>=3;
}
int main(){
	int a,b;
	cin>>a>>b;
	bool ok =false;
	for(int i=a;i<=b;i++){
		if(tn(i)&&check(i)){
			ok ==true;
			cout<<i<<" ";
		}
	}if(ok==false)cout<<-1;
	return 0;
}
