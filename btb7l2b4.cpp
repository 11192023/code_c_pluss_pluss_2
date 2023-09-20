#include <iostream>
#include<cmath>

// 415800 = 2^3x3^3x5^2x7^1x11^1

int main() {
	unsigned int n;
	unsigned i = 2;
    cin>>n;
	
	if(n < 1) {
		cout<<"Nhap n > 0";
	} else if(n == 1) {
	   cout<<"1 = 2^0";
	} else {
		cout<<n;
		int count = 0;
		while(n > 1) {
			if(n % i == 0) {
				count++; 
				if(n == i) {
					cout<<i<<" "<<count;
				}
				n /= i;
			} else {
				if(count > 0) {
					cout<<power(i,count);
					count = 0;
				}
				i++;
			}
		}
	}
 	
	
	return 0;
}
