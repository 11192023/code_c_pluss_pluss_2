#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum(int n){
	int sum =0;
	while (n){
		sum+=n%10;
		n/=10;
	}return sum;
}
bool smith(int n){
	int sum_1=sum(n);
	int sum_2=0;
	int temp =n;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum_2+=sum(i);
			n/=i;
			
		}
	}if(temp==n)return false;
	if(n!=1){
		sum_2+=sum(n);
	}return sum_1==sum_2;
}
int main(){
	int n;
	cin>>n;
	if(smith(n))cout<<"YES";
	else cout<<"NO";
	return 0;
	
}



