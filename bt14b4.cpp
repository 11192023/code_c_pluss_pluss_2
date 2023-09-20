#include<bits/stdc++.h>
using namespace std;
int check_1(int n){
	int sum =0;
	int temp=n;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}return sum==temp;
}
int check_2(int n){
	while(n){
		if(n%10==6)return 1;
		n/=10;
	}return 0;
}
int check_3(int n){
	int sum=0;
	while (n){
		sum+=n%10;
		n/=10;
	}if(sum%10==8)return 1;
	return 0;
}
int main(){
	int a,b;
	cin>>a>>b;
	for(int i =a;i<=b;i++){
		if(check_3(i)&&check_2(i)&&check_1(i)){
			cout<<i<<endl;
		}
	}return 0;
}

