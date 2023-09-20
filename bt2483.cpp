#include<iostream>
#include <math.h>
using namespace std;
int main(){
	double a, b;
	cin >>a>>b;
	int L= ceil(a);
	int R= floor(b);
	int count =R-L+1;
	cout <<count;
	return 0;
}
