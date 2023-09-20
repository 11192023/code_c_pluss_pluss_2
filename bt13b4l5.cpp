#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool tn(int n){
	int rev=0;
	int temp=n;
	while(n){
		rev=rev*10+n%10;
		n/=10;
	}return temp==rev;
}
bool check_2(int n){
	int cnt =0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		
		
		while (n%i==0){
			n/=i;
		}
		cnt++;
}
	}if(n!=1)cnt++;
	return cnt >=3;
}
int main(){
	int a,b;
	cin>>a>>b;
	bool found= false;
	for(int i=a;i<=b;i++){
		if(tn(i)&&check_2(i)){
			found =true;
			cout<<i<<" ";
			
		}
	}if(found==false)cout<<-1;
	return 0;
}

