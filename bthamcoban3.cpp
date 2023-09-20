#include <iostream>
#include <cmath>
using namespace std;
bool ktnt(int a){
	if(a<2) return false;
	for(int b =2;b<=sqrt(a);b++){
		if(a%b==0){
			cout<<false;
		}
	}return a>1;
}
int check(int n){
	int sum =0;
	while(n){
		sum+=n%10;
		n/=10;
	
	}return ktnt(sum);
}

int main(){
	int c =124;
	
	if(check(c)){
	
		cout <<"1\n";
	}else{
	cout<<"0\n";
	}return 0;
}
