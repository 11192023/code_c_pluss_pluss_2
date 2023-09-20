#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma, ten,lop;
	public:
		friend ostream&operator <<(ostream&,sinhvien );
		friend istream&operator>>(istream&,sinhvien&);
		string get_lop(){
			return this->lop;
		}
};
ostream&operator <<(ostream&out,sinhvien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<endl;
	return out;
}
istream&operator >>(istream&in ,sinhvien& a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	return in;
}
int main(){
	int n;cin>>n;
	map<string,vector<sinhvien>>mp;
	for(int i=0;i<n;i++){
		sinhvien tmp;
		cin>>tmp;
		mp[tmp.get_lop()].push_back(tmp);
	}
	int q;cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<"danh sach sinh vien lop "<<s<<": \n";
		for(sinhvien x:mp[s]){
			cout<<x;
		}
	}
	return 0;
}