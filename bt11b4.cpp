#include <iostream>
#include <cmath>
using namespace std ;
int main(){
	long long n;
	cin>>n;
	long long count =0;
	long long power =5;
	while (n>=power ){
		count += n/power;
		power *= 5;
		
		
	}cout <<count ;
	return 0; 
}
