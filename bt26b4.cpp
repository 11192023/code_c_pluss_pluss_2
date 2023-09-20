#include <iostream>
#include<iomanip>
using namespace std;
int pascal(int k, int n){
	if(k==0||k==n){
	return 1;}
else {
return pascal(k-1,n-1)+pascal(k,n-1);
}
}
int main(){
	int n;
	cin>>n;
	int i,k;
	for( i=0;i<=n;i++){
		for( k=0;k<=i;k++){
			cout<<setw(5)<< pascal(k,i);
		}cout<<endl;
	}return 0;
}
