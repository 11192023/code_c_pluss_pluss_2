#include<bits/stdc++.h>
using namespace std;
class giaovien;
class sinhvien;
class sinhvien{
	friend class giaovien;
	private:
		string ten;
		string lop;
		double gpa;
	public:
		void in();
		void nhap();
};
void sinhvien::nhap(){
	cout<<"nhap ten : ";
	getline(cin,this->ten);
	cout<<endl;
	cout<<"nhap lop : ";
	cin>>this->lop;
	cout<<endl;
	cout<<"nhap gpa : ";
	cin>>this->gpa;
}
void sinhvien::in(){
	cout<<this->ten<<" "<<this->lop<<" "<<fixed<<setprecision(2)<<this->gpa;
	cout<<endl;
}
class giaovien{
	private:
		string khoa;
	public:
		void capnhatdiem(sinhvien&);
};
 void giaovien::capnhatdiem(sinhvien &x){
	x.gpa=3.22;
}
int main(){
	sinhvien x;
	x.nhap();
	x.in();
	giaovien y;
	y.capnhatdiem(x);
	x.in();
	return 0;
}