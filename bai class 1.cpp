#include<bits/stdc++.h>
using namespace std;
class Tenclass
{
	private:
		string id,ten,ns;
		double gpa;
    public:
    	Tenclass();
    	Tenclass(string id,string ten, string ns,double gpa);
    	void xinchao();
    	void dihoc();
    	void nhap();
    	void in();
    	double get_gpa()const{
    		return this->gpa;
		}
    
};
Tenclass::Tenclass(){
	this->id=this->ten=this->ns="";
	this->gpa=0.0;
}
Tenclass::Tenclass(string id,string ten,string ns,double gpa){
	this->id=id;
	this->ten=ten;
	this->ns=ns;
	this->gpa=gpa;
}
void Tenclass:: xinchao(){
	cout<<"hello\n ";
}
void Tenclass:: dihoc(){
	cout<<"di hoc\n";
}
bool cmp(Tenclass a,Tenclass b){
	return a.get_gpa()>b.get_gpa();
}


void Tenclass::nhap(){
	cout<<"nhap id\n";
	cin.ignore();
	cin>>this->id;
	cin.ignore();
	cout<<"nhap ten\n";
	getline(cin,this->ten);
	cout<<"nhap ngay sinh\n";
	cin>>this->ns;
	cout<<"nhap diem\n";
	cin>>this->gpa;
}
void Tenclass::in()
{
	cout<<this->id<<" "<<this->ten<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa<<endl;
}
int main(){
	int n;
	cin >>n;
	Tenclass a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		a[i].in();
	}
	return 0;
}
