#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	double a, b;
	cin >> a >> b;
	double c, d;
	cin >> c >> d;
	
	cout << sqrt( pow(c-a,2)+pow(d-b,2)) << endl;
	
	return 0;
}
