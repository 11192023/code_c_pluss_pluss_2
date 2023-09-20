#include<bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		double thuc;
		double ao;
	public:
	    friend istream&operator  >>(istream& in,sophuc &a);
		friend ostream&operator <<(ostream &out,sophuc a);
		sophuc operator +(sophuc another);
		sophuc operator -(sophuc another);
};
istream&operator>>(istream &in,sophuc &a){
	in>>a.thuc>>a.ao;
	return in;
}
ostream&operator<<(ostream&out,sophuc a){
	out<<a.thuc<<" "<<a.ao;
	return out;
}
sophuc sophuc::operator +(sophuc another){
	sophuc tong;
	 tong.thuc=this->thuc+another.thuc;
	 tong.ao=this->ao+another.ao;
	 return tong;
}
sophuc sophuc::operator -(sophuc another){
	sophuc hieu;
	 hieu.thuc=this->thuc-another.thuc;
	 hieu.ao=this->ao-another.ao;
	 return hieu;
} 
int main(){
	sophuc a,b;
	cin>>a>>b;
	sophuc tong =a+b;
	sophuc hieu =a-b;
	cout<<tong<<" "<<hieu<<endl;
	return 0;
	
}
