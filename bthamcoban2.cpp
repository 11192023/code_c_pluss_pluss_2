#include<iostream>
#include<math.h>
using namespace std;
bool nt(int n){
	for(int i =2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
		return true;
}
}int main(){
	for(int i=1;i<=100;i++){
		if(nt(i)){
			cout<<i<<endl;
		}
	}return 0;
}
