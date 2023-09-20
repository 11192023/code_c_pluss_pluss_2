#include<iostream>
using namespace std;
using ll =long long ;
ll gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}
ll lcm(ll a,ll b){
	return a/gcd(a,b)*b;
}
class phanso {
	private:
		ll tu ;
		ll mau;
	public:
		phanso ();
		phanso (ll tu,ll mau);
		friend istream& operator>>(istream&,phanso&);
		friend ostream& operator<<(ostream&,const phanso&);
		void rutgon();
		friend phanso operator +(phanso a,phanso b);
};
phanso::phanso(){
	this->tu=0;
	this->mau=0;
}
phanso::phanso(ll tu,ll mau){
	this->tu=tu;
	this->mau=mau;
}
istream& operator>>(istream&in,phanso&a){
	in>>a.tu>>a.mau;
	return in;
}
ostream& operator<<(ostream&out,const phanso&a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
void phanso::rutgon(){
	ll g=gcd(this->tu,this->mau);
	this->tu/=g;
	this->mau/=g;
}
phanso operator+(phanso a,phanso b){
	phanso tong ;
	ll mc= lcm(a.mau,b.mau);
	tong.tu=mc/a.mau*a.tu+mc/b.mau*b.tu;
	tong.mau=mc;
	ll g =gcd(tong.tu,tong.mau);
	tong.tu/=g;
	tong.mau/=g;
	return tong;
}
int main(){
	phanso p(1,1),q(1,1);
	cin>>p>>q;
	cout<<p+q;
	return 0;
}

