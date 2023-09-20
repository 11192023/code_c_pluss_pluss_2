#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
class sinhvien{
	private:
		string code;
		string name;
		string codeofstudent;
		string date;
		double gpa;
		static int dem;
	public:
		sinhvien()=default;
		sinhvien(const string &code,const string &name,const string &codeofstudent,const string &date,double gpa){
			this->code=code;
			this->name=name;
			this->codeofstudent =codeofstudent;
			this->date=date;
			this->gpa=gpa;
		}
		friend istream&operator >>(istream&in,sinhvien&sv);
		friend ostream&operator<<(ostream&os,const sinhvien&sv);
	void optimaldate();
	void optimalname();
};
int sinhvien::dem=0;
istream&operator>>(istream&in,sinhvien&sv){
	sinhvien::dem++;
	sv.code="SV"+string(3-to_string(sinhvien::dem).length(),'0')+to_string(sinhvien::dem);
	in.ignore();
	cout<<"enter the name for student: ";
	getline(in,sv.name);
	cout<<"enter of the code of the student is class: ";
	in>>sv.codeofstudent;
	cout<<"enter of the date for the student: ";
	in>>sv.date;
	cout<<"enter of the gpa for the student: ";
	in>>sv.gpa;
	return in;
}
ostream&operator<<(ostream&os,const sinhvien&sv){
	os<<"code of the student: "<<sv.code<<endl;
	sinhvien tmp=sv;
	tmp.optimalname();
	os<<"name of the student: "<<tmp.name<<endl;
	os<<"class of the student: "<< sv.codeofstudent<<endl;
	sinhvien cmp=sv;
	cmp.optimaldate();
	os<<"date of the student: "<<cmp.date<<endl;
	os<<"gpa of the student: "<<fixed<<setprecision(1)<<sv.gpa<<endl;  
	return os;
}
void optimal(string&s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
void sinhvien::optimalname(){
	string res =name;
	for(int i=0;i<res.length();i++){
		res[i]=tolower(res[i]);
	}
	stringstream ss(res);
	string token;
	const int max=100;
	string word[max];
	int count=0;
	while(ss>>token&&count<max)
	{
		word[count]=token;
		count++;
	}
	for(int i=0;i<count;i++){
		optimal(word[i]);
	}
	name="";
	for(int i=0;i<count;i++){
		name+=word[i];
		if(name!=word[count-1]){
			name+=" ";
		}
	}
}
void sinhvien::optimaldate(){
	if(date[2]!='/'){
		date.insert(0,"0");
	}
	if(date[5]!='/'){
		date.insert(3,"0");
	}
}
int main(){
	cout<<"enter of the quantity:";
	int n;
	cin>>n;
	sinhvien sv[100];
	for(int i=0;i<n;i++){
		cin>>sv[i];
	}
	for(int i=0;i<n;i++){
		cout<<sv[i];
	}
	return 0;
}