#include <iostream>
using namespace std;
int tn(int n){
	int rev =0,temp=n;
	while(n){
		rev=rev*10-n%10;
		n/=10;
	}return rev ==temp;
}
int check(int n){
	int ans=0;
	for(int i=2;i<=sqrt(n);i++){
		int cnt =0;
		while(n%i==0){
		}
	}
}
