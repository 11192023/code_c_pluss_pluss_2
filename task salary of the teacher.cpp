#include<iostream>
#include<sstream>
using namespace std;
class teacher{
	private:
		string code;
		string name;
		double salary;
	public:
		teacher()=default;
		teacher(const string &code,const string &name,double salary){
			this->code=code;
			this->name=name;
			this->salary=salary;
		}
		friend istream&operator>>(istream&in,teacher&tc);
		friend ostream&operator<<(ostream&os,const teacher&tc);
};
void optimal(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
string name(string &s){
	string res="";
	stringstream ss(s);
	string token;
	const int  max=100;
	string a[max];
	int count =0;
	while(ss>>token&&count<max){
		a[count]=token;
		count++;
	}
	for(int i=0;i<count;i++){
	    optimal(a[i]);	
	}
	for(int i=0;i<count;i++){
		res+=a[i];
		if(res!=a[count-1]){
			res+=" ";
		}
	}
	return res;
}
string take(string &s){
	string res=s.substr(0,2);
	return res;
}
istream&operator>>(istream&in,teacher&tc){
	cout<<"enter of the code: ";
	in>>tc.code;
	in.ignore();
	cout<<"enter of the name: ";
	getline(in,tc.name);
	cout<<"enter of the salary: ";
	in>>tc.salary;
	return in;
}
ostream&operator<<(ostream&os,const teacher &tc){
	teacher ct=tc;
	string took=take(ct.code);
	long long salary_teacher;
	if(took=="HT"){
		salary_teacher=tc.salary*2000000;
	}else if(took=="HP"){
		salary_teacher=tc.salary*1000000;
	}else{
		salary_teacher=tc.salary*500000;
	}
	os<<"code: "<<tc.code<<endl;
	teacher sv=tc;
	string hc=name(sv.name);
	os<<"name: "<<hc<<endl;
	os<<"salary of the teacher: "<<salary_teacher<<endl;
	return os;
}
int main(){
	cout<<"enter of the quantity: "<<endl;
	int n;
	cin>>n;
	teacher tc[100];
	for(int i=0;i<n;i++){
		cin>>tc[i];
	}
	for(int i=0;i<n;i++){
		cout<<tc[i];
	}
	return 0;
}
