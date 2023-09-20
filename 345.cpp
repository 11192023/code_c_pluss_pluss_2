#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
struct student{
	string name;
	string date;
	int age;
	int gpa;
};
void input(student &a){
	cin.ignore();
	cout<<"enter of the name for the student: ";
    getline(cin,a.name);
    cout<<"enter of the date for the student: ";
    cin>>a.date;
    cout<<"enter of the age for the student: ";
    cin>>a.age;
    cout<<"enter of the gpa for the student: ";
    cin>>a.gpa;
}
void optimal(string &s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
string name(string &s){
	stringstream ss(s);
	string token;
	vector<string>v;
	while(ss>>token){
		v.push_back(token);
	}
	for(int i=0;i<v.size();i++){
		optimal(v[i]);
	}
	string res="";
	for(int i=0;i<v.size();i++){
		res+=v[i];
		if(i!=v.size()-1){
			res+=" ";
		}
	}
	return res;
}
string Date(string &a){
	string res="";
	if(a[2]!='/'){
		res=a.insert(0,"0");
	}
	if(a[5]!='/'){
		res=a.insert(3,"0");
	}
	return res;
}
void output(student a){
	cout<<name(a.name)<<endl;
	cout<<Date(a.date)<<endl;
	cout<<a.age<<endl;
	cout<<a.gpa<<endl;
}
bool cmp(student &a,student &b){
	if(a.gpa!=b.gpa){
		return a.gpa>b.gpa;
	}else{
		return a.name>b.name;
	}
}
void find(student a[],int n,int b){
	for(int i=0;i<n;i++){
		if(a[i].gpa==b){
			output(a[i]);
			cout<<endl;
		}	
	}
}
int main(){
	cout<<"enter of the quanlity for the student: ";
	int n;
	cin>>n;
	student*a =new student[100];
	for(int i=0;i<n;i++){
		input(a[i]);
	}
	cout<<"enter of the gpa but i want to find: ";
	int b;
	cin>>b;
	find(a,n,b);
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		output(a[i]);
		cout<<endl;
	}
	delete[]a;
	return 0;
}
