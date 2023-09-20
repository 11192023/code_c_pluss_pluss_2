#include<bits/stdc++.h>
using namespace std;
class sinhvien {
	private:
		string ten;
		string lop;
		string gpa;
	public:
		void nhap();
		void in();
		friend void chuanhoa(sinhvien&);
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
}
void chuanhoa(sinhvien &a){
    string res="";
    stringstream ss(a.ten);
    string token;
    while(ss>>token){
    	res+=toupper(token[0]);
    	for(int i=1;i<token.length();i++){
    		res+=tolower(token[i]);
		}
		res+=" ";
	}
	res.erase(res.length()-1);
	a.ten=res;
}
int main(){
	sinhvien x;
	x.nhap();
	chuanhoa(x);
	x.in();
	return 0;
}
