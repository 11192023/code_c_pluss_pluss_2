#include<bits/stdc++.h>
using namespace std;
class sinhvien{
	private:
		string ma,ten,lop;
	public:
		friend istream&operator >>(istream&,sinhvien&);
		friend ostream&operator<<(ostream&,sinhvien);
		string get_ma(){
			return this->ma;
		}
};
istream&operator >>(istream& in,sinhvien&a){
	in>>a.ma;
	in.ignore();
	getline(in,a.ten);
	in>>a.lop;
	return in;
}
ostream&operator<<(ostream& out,sinhvien a){
	out<<a.ma<<" "<<a.ten<<" "<<a.lop<<endl;
	return out;
}
void viethoa(string &s){
	for(char&x:s)
	{
		x=toupper(x);
	}
}
string convert(string s){
	stringstream ss(s);
	vector<string>v;
	string token,res="";
	while (ss>>token)v.push_back(token);
	for(int i=0;i<2;i++){
		res+=toupper(v[i][0]);
	}
	return res;
}
int main(){
	int n;
	cin >>n;
	map<string ,vector<sinhvien>>mp;
	for(int i=0;i<n;i++){
		sinhvien token;
		cin>>token;
		mp[token.get_ma().substr(5,2)].push_back(token);
	}
	int q;
	cin>>q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin,s);
		viethoa(s);
		cout<<"danh sach sinh vien nganh "<<s<<":\n";
		string ng=convert(s);
		if(ng=="CN"||ng=="AT"){
			for(sinhvien x:mp[ng]){
				if(x.get_ma().find("E") == string :: npos){
					cout<<x;
				}
			}
		}
		else{
			for(sinhvien x:mp[ng]){
				cout<<x;
			}
		}
	}
	return 0;
}