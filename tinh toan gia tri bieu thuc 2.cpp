#include<iostream>
using namespace std;
int main()
{ 
long long a, b, c;
cin >> a >> b >>c;
if (a >= 0){
	cout << a*(b+c)+b*(a+c) << endl;
}
return 0;
}
