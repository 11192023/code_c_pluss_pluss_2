#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma,ten,lop;
	public:
		sinhvien(){
			this->ma=this->ten=this->lop="";
		}
		friend ostream&operator<<(ostream&,sinhvien);
		friend istream&operator>>(istream&,sinhvien&);
		bool operator <(sinhvien a){
			return this->ma<a.ma;
		}
		string get_lop(){
			return this->lop;
		}
};
istream&operator>>(istream&in,sinhvien& a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	return in;
}
ostream&operator<<(ostream&out, sinhvien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<endl;
	return out;
}
int main(){
	int n;
	cin>> n;
	sinhvien a[n];
	for(int i=0;i<n;i++)cin>>a[i];
		int q;cin>>q;
		while(q--){
			string s;
			cin>>s;
			cin.ignore();
			cout<<"danh sach sinh vien co cung lop "<<s<<":\n";
			for(sinhvien x:a){
				if(x.get_lop()==s){
					cout<<x;
				}
			}
		}
	}
	