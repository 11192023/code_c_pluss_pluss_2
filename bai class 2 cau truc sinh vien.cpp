#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma,ten,lop,ns;
		double gpa;
	public:
		sinhvien(){
			this->ten=this->lop=this->ns="";
			this-> gpa=0.0;
		}
		sinhvien(string ten,string lop,string ns,double gpa){
			this->ten=ten;
			this->lop=lop;
			this->ns=ns;
			this->gpa=gpa;
		}
		friend istream&operator>>(istream&,sinhvien&);
		friend ostream&operator<<(ostream&,sinhvien);
};
istream&operator>>(istream&in,sinhvien&a){
	a.ma="B20DCCN001";
	getline(in,a.ten);
	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2]!='/')a.ns="0"+a.ns;
	if(a.ns[5]!='/')a.ns.insert(3,"0");
	return in;
}
ostream&operator<<(ostream&out,sinhvien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<" "<<a.gpa<<endl;
	return out;
}
#define a() a;
int main(){
	sinhvien a();
	cin>>a;
	cout<<a;
	return 0;
}