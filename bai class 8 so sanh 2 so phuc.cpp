#include<bits/stdc++.h>
using namespace std;
class sophuc{
	private:
		double thuc;
		double ao;
	public:
	    friend istream&operator  >>(istream& in,sophuc &a);
		friend ostream&operator <<(ostream &out,sophuc a);
	    bool operator ==(sophuc a);
};
istream&operator>>(istream &in,sophuc &a){
	in>>a.thuc>>a.ao;
	return in;
}
ostream&operator<<(ostream&out,sophuc a){
	out<<a.thuc<<" "<<a.ao;
	return out;
}
bool sophuc::operator ==(sophuc a){
	return this->thuc==a.thuc&&this->ao==a.ao;
}
int main(){
	sophuc a,b;
	cin>>a>>b;
	if(a==b){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
	
}
