#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double r;
	cin >> r;
	double x,y;
	x = 2*r*3.14;
	y = 3.14*r*r;
	if (x >= 1)
	{
		cout << fixed << setprecision(2) << x*1.0 << " " << fixed << setprecision(2) << y*1.0 << endl;
	}
	return 0;
}
