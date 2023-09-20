#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll gcd(ll a,ll b){
	if(b==0)return a;
	return gcd(b,a%b);
}
class phanso{
	private:
		ll tu;
		ll mau;
	public:
		phanso(ll tu ,ll mau);
		friend ostream&operator<<(ostream&,const phanso&);
		friend istream&operator >>(istream&,phanso&);
		void rutgon();
};
phanso::phanso(ll tu, ll mau){
	this->tu=tu;
	this->mau=mau;
}
ostream&operator<<(ostream&out,const phanso &a){
	out<<a.tu<<"/"<<a.mau;
	return out;
}
istream&operator>>(istream&in,phanso &a){
	in>>a.tu>>a.mau;
	return in;
}
void phanso::rutgon(){
	ll g=gcd(tu,mau);
	tu/=g;
	mau/=g;
}
int main(){
	phanso p(1,1);
	cin>>p;
	p.rutgon();
	cout<<p;
	return 0;
}