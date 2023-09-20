#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	cin >> a;
	double b,c;
	b = sqrt(a);
	c = cbrt(a);
	cout << fixed << setprecision(3) << b << " " << fixed << setprecision(3) << c << endl;
	return 0;
}
