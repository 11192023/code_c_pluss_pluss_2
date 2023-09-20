#include<bits/stdc++.h>
using namespace std;
class Sinhvien{
	private:
		string id,ten,ns;
		double gpa;
	public:
		friend istream&operator>>(istream& in,Sinhvien& a);
		friend ostream&operator<<(ostream& out,Sinhvien a);
		//bool operator<(Sinhvien a);
		friend bool operator<(Sinhvien a,Sinhvien b);
};
//bool Sinhvien::operator<(Sinhvien a){
	//return this->gpa < a.gpa;
//}
 bool operator<(Sinhvien a,Sinhvien b){
 	return a.gpa<b.gpa;
 }
istream& operator>>(istream& in,Sinhvien& a){
	cout<<"nhap id ";
	in>>a.id;
	cout<<endl;
	in.ignore();
	cout<<"nhap ten ";
	getline(in,a.ten);
	cout<<endl;
	cout<<"nhap ns ";
	in>>a.ns;
	cout<<endl;
	cout<<"nhap gpa ";
	in>>a.gpa;
	cout<<endl;
	return in;
}
ostream &operator<<(ostream& out,Sinhvien a){
	cout<<a.id<<" "<<a.ten<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
	int n;
	cin>>n;
	Sinhvien a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(Sinhvien x:a){
		cout<<x;
	}
	return 0;
}