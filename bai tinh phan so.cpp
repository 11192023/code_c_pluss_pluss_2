#include<iostream>
using namespace std;
class phanso{
	private:
		int tu;
		int mau;
	public:
		phanso(){
			this->tu=0;
			this->mau=1;
		}
		phanso(int tu,int mau){
			this->tu=tu;
			this->mau=mau;
		}
	friend istream&operator>>(istream&in,phanso &ps);
	friend ostream&operator<<(ostream&os,const phanso&ps);
	int gcd(int tu,int mau);
    void rutgon();
};
istream&operator>>(istream&in,phanso&ps){
	cout<<"enter the element of numerator: ";
	in>>ps.tu;
	cout<<"enter the element of denominator: ";
	in>>ps.mau;
	return in;
}
ostream&operator<<(ostream&os,const phanso&ps){
	os<<"result: "<<ps.tu<<" / "<<ps.mau;
	return os;
}
int phanso::gcd(int tu,int mau){
	if(mau==0){
		return tu;
	}
	return gcd(mau,tu%mau);
}
void phanso::rutgon(){
	int ucln=gcd(this->tu,this->mau);
	this->tu/=ucln;
	this->mau/=ucln;
}
int main(){
	phanso ps;
	cin>>ps;
	ps.rutgon();
	cout<<ps<<endl;
}