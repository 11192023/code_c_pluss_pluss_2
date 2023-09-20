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
	int n;
	cin>>n;
	map<int, vector<sinhvien>>mp;
	for(int i=0;i<n;i++){
		sinhvien tmp;
		cin>>tmp;
		mp[stoi(tmp.get_lop().substr(1,2))].push_back(tmp);
	}
	int q;
	cin>>q;
	while(q--){
		int nam;
		cin>>nam;
		cout<<"danh sach sinh vien khoa "<<nam<<":\n";
		for(sinhvien x:mp[nam%100]){
			cout<<x;
		}
	}
	return 0;
}