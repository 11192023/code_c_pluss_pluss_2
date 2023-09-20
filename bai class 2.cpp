#include<bits/stdc++.h>
using namespace std;
class Sinhvien{
	private:
		string id;
		string ten;
		string lop;
		string ns;
		double gpa;
    public:
    	Sinhvien();
    	Sinhvien(string ,string,string,string,double);
    	double get_gpa()const{
    		return this->gpa;
		}
		void nhap();
		void in();
		string get_ten()const{
			return this->ten;
		}
		string get_lop()const{
			return this->lop;
		}
		string get_ns()const{
			return this->ns;
		}
		string get_id()const{
			return this->id;
		}
		void set_gpa(double);//gán trực tiếp giá trị cho gpa
};
Sinhvien::Sinhvien(){
	this->id=this->ten=this->lop=this->ns="";
	this->gpa=0.0;
}
Sinhvien::Sinhvien(string id,string ten,string lop,string ns,double gpa){
	this->id=id;
	this->ten=ten;
	this->lop=lop;
	this->ns=ns;
	this->gpa=gpa;
}
void Sinhvien::in()
{
	cout<<"nhap id \n";
	cin>>this->id;
	cin.ignore();
	cout<<"nhap ten \n";
	getline(cin,this->ten);
	cout<<"nhap lop \n";
	cin>>this->lop;
	cout<<"nhap ns \n";  
	cin>>this->ns;
	cout<<"nhap gpa \n";
	cin>>this->gpa;
}
void Sinhvien::nhap(){
	cout<<this->id<<" "<<this->ten<<" "<<this->lop<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}
bool cmp(Sinhvien a,Sinhvien b){
 return a.get_gpa()>b.get_gpa()	;
}
void Sinhvien::set_gpa(double gpa){
	this->gpa=gpa;
}
int main(){
	Sinhvien x;
	x.nhap();
	Sinhvien y =x;
	y.in();
	return 0;
}