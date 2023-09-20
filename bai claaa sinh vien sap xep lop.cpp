#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma,ten,lop,email;
	public:
		friend istream&operator>>(istream&,sinhvien&);
		friend ostream&operator<<(ostream&,sinhvien);
		string get_lop(){
			return this->lop;
		}
};
istream&operator >>(istream&in,sinhvien &a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop>>a.email;
	return in;
}
ostream&operator <<(ostream&out,sinhvien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<endl;
	return out;
}
bool cmp(sinhvien a, sinhvien b){
	return a.get_lop()<b.get_lop();
}
int main(){
	int n;
	cin>>n;
	sinhvien a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	for(sinhvien x:a){
		cout<<x;
	}
	return 0;
}
