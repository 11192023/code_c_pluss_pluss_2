#include <iostream>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long count= 0;
	for(int i= 1; i<= n;i++){
		if(n%i==0){
			count++;
		}
	}cout<<count<<"\n";
	for(int i=1; i<=n; i++){
		if(n%i==0){
			cout<<i<< " ";
		}
	}return 0;
	
	
}
