#include<bits/stdc++.h>
using namespace std;
class doanhnghiep{
	private:
		string ma,ten;
		int soluong;
	public:
		void nhap();
		void xuat();
		int get_soluong(){
			return this->soluong ;
		}
		string get_ma(){
			return this->ma;
		}
};
void doanhnghiep::nhap(){
	cin>>ma;
	cin.ignore();
	getline(cin,ten);
	cin>>soluong;
}
void doanhnghiep::xuat(){
	cout<<ma<<" "<<ten<<" "<<soluong<<endl;
}
bool cmp (doanhnghiep a,doanhnghiep b){
	if(a.get_soluong()!=b.get_soluong()){
	return a.get_soluong() >b.get_soluong();
}
return a.get_ma()<b.get_ma();
}
int main(){
	int n;
	cin>>n;
	doanhnghiep a[100];
	for(int i=0;i<n;i++){
		a[i].nhap();
	}
	sort(a,a+n,cmp);
	int q;cin>>q;
	while(q--){
		int x,y;
		cin>>x>>y;
		cout<<"doanh nghiep nhan sinh vien tu "<<x<<" den "<<y<<endl;
		for(doanhnghiep i : a){
			if(i.get_soluong()>=x&&i.get_soluong()<=y){
				i.xuat();
			}
		}
	}
	return 0;
}