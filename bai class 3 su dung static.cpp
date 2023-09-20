#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ten;
		string lop;
	    string id;
	    static int dem;
	public:
		void nhap();
		void in();
};
int sinhvien::dem=0;
void sinhvien::nhap(){
	dem++;
	this->id="SV"+string(3-to_string(dem).length(),'0')+to_string(dem);
	cout<<"nhap ten : ";
	getline(cin,this->ten);
	cout<<endl;
	cout<<"nhap lop: ";
	cin>>this->lop;
	cout<<endl;
	cin.ignore();
}
void sinhvien::in(){
	cout<<this->id<<" "<<this->ten<<" "<<this->lop<<endl;
}
int main(){
	sinhvien x;
	x.nhap();
	x.in();
	sinhvien y;
	y.nhap();
	y.in();
	return 0;
}