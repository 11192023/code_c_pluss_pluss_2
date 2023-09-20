#include<iostream>
#include<cmath>
using namespace std;
bool nt(int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)return false;
	}return true;
}
int cuoicunglonnhat(int n){

int cnt =0;
while(n!=0){
	if(cnt <=n%10){
		cnt=n%10;
	}n/=10;
}return cnt;
}

int main(){
	int n;
	cin>>n;
	int cnt =0;
	for(int i=2;i<=n;i++){
		if(nt(i)&&cuoicunglonnhat(i)){
			cout <<i<< " ";
			cnt ++;
		}
	}cout<<endl << cnt;
}
