#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int t100 = n/100;
	int t20 = (n%100)/20;
	int t10= (n%20)/10;
	int t5=(n%10)/5;
	int t1=(n%5)/1;
	int tong = t100 + t20 +t10+t5+t1;
	cout<< tong;
	return 0;
}
