#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){

if(n<2)
	return false;
for(int i=2;i<=sqrt(n);i++){
	if (n%i==0)
	return false;
}return true;}
int main(){

long long n;
cin>>n;
int dem=0;
while(n>0){
	int digit =n%10;
	if(isprime(digit))dem++;
	n/=10;
}cout<<dem<<endl;
return 0;
}
