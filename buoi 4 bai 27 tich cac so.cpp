#include<iostream>
using namespace std;
int main(){
 int t;
 cin>>t;
 long long tich =1;
 while(t--){
 	int n;
 	cin>>n;
 	n%=1000000007;
 	tich*=n;
 	tich %=1000000007;
 	
 	
 }cout<<tich;
 return 0;
 
}
