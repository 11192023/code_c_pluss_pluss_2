
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double res = 1 - 1.0/(n+1);
	cout << fixed << setprecision(4)<<res<<endl;
	return 0;
}
