#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma,ten,lop;
	public:
		friend ostream&operator<<(ostream&,sinhvien);
		friend istream&operator>>(istream&,sinhvien&);
		bool operator <(sinhvien a){
			return this->ma<a.ma;
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
	vector<sinhvien> v;
	sinhvien tmp;
	while(cin>>tmp){
		v.push_back(tmp);
	}
	sort(v.begin(),v.end());
	for(sinhvien x:v){
		cout<<x;
	}
	return 0;
}