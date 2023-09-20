#include<iostream>
using namespace std;
int main(){
	int i,*pi1=&i,*pi2=nullptr;
	double *pd= new double(33),*pd2=pd;
	delete pd;
	delete pd2;
	return 0;
}