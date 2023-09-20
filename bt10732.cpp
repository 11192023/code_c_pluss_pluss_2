#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	cin>> a >> b;
	if(a!=0 && b !=0){
	
	int tong = a+b;
	int hieu = a-b;
	int tich = a *b;
	float thuong = float(a/b);
	cout <<tong<< endl;
	cout << hieu<<endl;
	cout<< tich<<endl;
	cout<<fixed << setprecision(2)<< thuong<< endl;
}
	return 0;
}
