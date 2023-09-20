#include<iostream>
using namespace std;
bool so_thuan_nghich(int num){
	int reversed =0;
	int a=num;
	while(num>0){
		int digit =num%10;
		reversed = reversed*10+digit;
		num/=10;
	}
	return reversed ==a;
}
int main(){
	int count =0;
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(so_thuan_nghich(a[i][j])){
				count++;
			}
		}
	}
	cout<<count<<endl;
}
