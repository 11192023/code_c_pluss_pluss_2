#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long a, b;
	cin>> a>>b;
	
		if(a != 0 && b != 0){
		
		cout << a + b << endl;
		cout << a-b << endl;
		cout << a*b << endl;
		cout << fixed << setprecision(2) << (float)a/b << endl;
}
	return 0;
}
