#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma;
		string ten;
		string lop;
		string ns;
		double gpa;
	public:
		sinhvien(){
			this->ten=this->lop=this->ns="";
			this->gpa=0.0;
		}
		sinhvien(string ten,string lop,string ns,double gpa){
			this->ten=ten;
			this->lop=lop;
			this->ns=ns;
			this->gpa=gpa;
		}
		friend void nhap(sinhvien &);
		friend void in(sinhvien);
};
void nhap(sinhvien& a){
	a.ma="B20DCCN001";
	cout<<endl;
	cout<<"nhap ten : ";
	getline(cin,a.ten);
	cout<<endl;
	cout<<"nhap lop : ";
	cin>>a.lop;
	cout<<endl;
	cout<<"nhap ngay sinh : ";
	cin>>a.ns;
	cout<<endl;
	cout<<"nhap gpa : ";
	cin>>a.gpa;
	cout<<endl;
	if(a.ns[2]!='/') a.ns="0"+a.ns;
	if(a.ns[5]!='/')a.ns.insert(3,"0");
}
void in(sinhvien a){
	cout<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<" "<<a.gpa<<endl;
}
#define a() a;
int main(){
	sinhvien a();
	nhap(a);
	in(a);
	return 0;
}