#include <iostream>
using namespace std;
class PhanSo
{
public:
	int tuso, mauso;
	PhanSo() {}
	PhanSo(int a, int b)
	{
		tuso = a;
		mauso = b;
	}
	~PhanSo() {}
	void InPhanSo()
	{
		cout << tuso << "/" << mauso<<endl;
	}
	PhanSo operator+(const PhanSo&rhs){
		PhanSo result;
		result.tuso=(tuso*rhs.mauso)+(rhs.tuso*mauso);
		result.mauso=mauso*rhs.mauso;
		return result;
	}
	PhanSo operator-(const PhanSo&rhs){
		PhanSo result;
		result.tuso=(tuso*rhs.mauso)-(rhs.tuso*mauso);
		result.mauso=mauso*rhs.mauso;
		return result;
	}
};

int main()
{
	PhanSo a = PhanSo(1, 2);
	PhanSo b = PhanSo(3, 4);
	PhanSo c=a+b;
	c.InPhanSo();
	PhanSo d=a-b;
	d.InPhanSo();
	a.InPhanSo();
	return 0;
}
