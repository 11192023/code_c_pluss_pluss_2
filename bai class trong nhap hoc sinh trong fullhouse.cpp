#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;
class student{
	private:
		string code;
		string name;
	    string grade;
	    string email;
		static int dem;
	public:
		student ()=default;
		void input();
		void output();
		void optimaldate(string &date);
		void optimalname(string &s);
		string getgrade(){
	      return grade;
}
	string get();	
};
string student::get(){
	string s=grade;
	string res="";
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'){
			res+=s[i];
		}
	}
	return res;
}
int student::dem=0;
void optimal(string &a){
a[0]=toupper(a[0]);
for(int i=1;i<a.length();i++){
	a[i]=tolower(a[i]);
}
}
void student::optimalname(string&s){
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
	s="";
	for(int i=0;i<count;i++){
		s+=word[i];
		if(s!=word[count-1]){
			s+=" ";
		}
	}
}
void student::input(){
	cin>>code;
	cin.ignore();
	getline(cin,name);
	cin>>grade;
	cin>>email;
	optimalname(name);
}
void student::optimaldate(string  &date){
	if(date[2]!='/'){
		date.insert(0,"0");
	}if(date[5]!='/'){
		date.insert(3,"0");
	}
}
void student::output(){
	cout<<code<<" "<<name<<" "<<grade<<" "<<email<<endl;
	
}
int main(){
  int n;
  cin>>n;
  student sv[100];
  for(int i=0;i<n;i++){
  	sv[i].input();
  }
  int t;
  cin>>t;
  while(t--){
  	string s;
  	cin>>s;
  	cout<<"DANH SACH SINH VIEN NGANH CONG NGHE THONG TIN : "<<endl;
  	for(int i=0;i<n;i++){
  		if(sv[i].get()==s){
  			sv[i].output();
		  }
	  }
  }
	return 0;
}
