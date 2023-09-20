
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long n,p;
	cin >>n>>p;
	long long x= 0;
	while (n>0){
		x+=n/p;
		n/=p;
	}cout <<x;
}
