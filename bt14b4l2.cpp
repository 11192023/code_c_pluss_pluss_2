#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check_1(int n){
	int sum =0;
	int temp=n;
	while(n){
		sum=sum*10+n%10;
		n/=10;
	}return sum==temp;
}
bool check(int n){
	int ok =0;
	int sum =0;
	while (n){
		int r =n%10;
		sum+=r;
		if(r%10==6)ok =1;
		n/=10;
	}if(ok&&sum%10==8)return 1;
	return 0;
	}

int main(){
	int a,b;
	cin>>a>>b;
	bool found =false;
	for(int i =a;i<=b;i++){
		if(check(i)&&check_1(i)){
			found =true;
			cout<<i<<" ";
		}
	}if(found==false)
		cout<<-1;
	
}

