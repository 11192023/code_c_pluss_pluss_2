#include <iostream>
using namespace std;
int tong(int n){
int sum =0;
for(int i=1;i<=n;i++){
	sum+=i;
}return sum;
}
int tongchan(int n){
	
		int sum=0;
		for(int i=1;i<=n;i++){
			if(i%2==0){
				sum+=i;
			}
		}return sum;
	
}
int main(){
	int n;
	cin>>n;
	cout<<tong(n)<<" "<<tongchan(n);
	return 0;
	
}
