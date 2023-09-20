#include<iostream>
#include<sstream>
using namespace std;
class student{
	private:
		string code;
		string name;
		string date;
		string address;
	public:
		student(const string &code,const string &name,const string &date,const string&address){
			this->code=code;
			this->name=name;
			this->date=date;
			this->address=address;
		}
		student()=default;
		friend istream&operator>>(istream&in,student &sv);
		friend ostream&operator<<(ostream&os,const student &sv);
		string optimalname();
		string optimaldate();
};
void optimal(string& s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
string student::optimalname(){
	string s=name;
	stringstream ss(s);
	string token;
	const int max=100;
	string word[max];
	int count=0;
	while(ss>>token&&count<max){
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
	return name;
}
string student::optimaldate(){
	string s=date;
	if(s[2]!='/'){
		s.insert(0,"0");
	}if(s[5]!='/'){
		s.insert(3,"0");
	}
	return s;
}
istream&operator>>(istream&in,student &sv){
	cout<<"enter of the code: ";
	in>>sv.code;
	cout<<"enter of the name: ";
	in.ignore();
	sv.name=sv.optimalname();
	getline(in,sv.name);
	cout<<"enter of the date: ";
	in>>sv.date;
	cout<<"enter of the address: ";
	in.ignore();
	getline(in,sv.address);
	return in;
}
ostream&operator<<(ostream&os,const student&sv){
	os<<"code: "<<sv.code<<endl;
		student cm=sv;
		cm.name=cm.optimalname();
	os<<"name: "<<cm.name<<endl;
		student sf=sv;
		sf.date=sf.optimaldate();
	os<<"date: "<<sf.date<<endl;
	os<<"address: "<<sv.address<<endl;
	return os;
}
int main(){
	cout<<"enter of the quantity for the student: ";
	int n;
	cin>>n;
	student sv[100];
	for(int i=0;i<n;i++){
		cin>>sv[i];
	}
	for(int i=0;i<n;i++){
		cout<<sv[i];
	}
	return 0;
}
