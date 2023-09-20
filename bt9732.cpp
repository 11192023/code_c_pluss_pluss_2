#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main(){
	int  a, b, c ,d;
	cin >> a >> b>>c>>d;
	int x = (a-c)*(a-c);
	int y = (b-d)*(b-d);
	float kc = sqrt(x+y);
	cout << fixed << setprecision(4) << kc << endl;
	return 0;
}

