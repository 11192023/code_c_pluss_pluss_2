#include <iostream>
#include<cmath>
using namespace std;
int main (){
	long long n, m ,a;
	cin>>n>>m>>a;
	long long chieudai = ceil((double ) n/a);
	long long chieurong = ceil((double ) m/a);
	long long dientich = chieudai * chieurong;
	cout<<dientich;
	return 0;
}
