#include<iostream>
#include<sstream>
using namespace std;
class student{
	private:
		string code;
		string name;
		string grade;
		string email;
	public:
		student()=default;
		student(const string &code,const string &name,const string&grade,const string &email){
			this->code=code;
			this->name=name;
			this->grade=grade;
			this->email=email;
		}
		string getgrade(){
			return grade;
		}
		friend istream&operator>>(istream&in,student&sv);
		friend ostream&operator<<(ostream&os,const student&sv);
		  string take();
};
string student::take(){
	string s=getgrade();
	string res="";
	for(int i=0;i<s.length();i++){
		if(s[i]>'A'&&s[i]<'Z'){
			res+=s[i];
		}
	}
	return res;
}
void optimal(string& s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
string optimalname(string&s){
	string res="";
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
	for(int i=0;i<count;i++){
		res+=word[i];
		if(res!=word[count-1]){
			res+=" ";
		}
	}
	return res;
}
istream&operator>>(istream&in,student&sv){
	cout<<"enter of the code: ";
	in>>sv.code;
	in.ignore();
	cout<<"enter of the name: ";
	getline(in,sv.name);
	cout<<"enter of the grade: ";
	in>>sv.grade;
	cout<<"enter of the email: ";
	in>>sv.email;
	return in;
}
ostream&operator<<(ostream&os,const student&sv){
	os<<"code: "<<sv.code<<endl;
	student hm=sv;
    hm.name=optimalname(hm.name);
	os<<"name: "<<hm.name<<endl;
	os<<"grade: "<<sv.grade<<endl;
	os<<"email: "<<sv.email<<endl;
	return os;
}
int main(){
	cout<<"enter of the quantity of the student: ";
	int n;
	cin>>n;
	student sv[100];
	for(int i=0;i<n;i++){
		cin>>sv[i];
	}
	cout<<"enter of the quanlity test case: ";
	int t;
	cin>>t;
	while(t--){
		string a;
		cin>>a;
		cout<<"DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN: "<<endl;
		for(int i=0;i<n;i++){
			if(sv[i].take()==a){
				cout<<sv[i];
			}
		}
	}
	return 0;
}
