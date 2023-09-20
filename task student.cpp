#include<iostream>
#include<sstream>
using namespace std;
class student{
	private:
		string name;
		int id;
		double marks[3];
	public:
		student()=default;
		student(const string&name,int id,double marks[]){
			this->name=name;
			this->id=id;
			for(int i=0;i<3;i++){
				this->marks[i]=marks[i];
			}
		}
		friend istream&operator>>(istream&in,student&sv);
		friend ostream&operator<<(ostream&os,const student&sv);
		 friend void bubble_sort(student sv[],int n);
		string optimalname();
};
void optimal(string &s){
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
istream &operator>>(istream&in,student&sv){
	cout<<"enter of the name: ";
	in.ignore();
	getline(in,sv.name);
	sv.optimalname();
	cout<<"enter of the id:";
	in>>sv.id;
	cout<<"list of the point the all of the subject:"<<endl;
	for(int i=0;i<3;i++){
		cout<<"the point subject "<<i+1<<": ";
		in>>sv.marks[i];
	}
	return in;
}
ostream&operator<<(ostream&os,const student&sv){
	os<<"name: "<<sv.name<<endl;
	os<<"id: "<<sv.id<<endl;
	os<<"list of the point of the student: "<<endl;
	for(int i=0;i<3;i++){
		os<<"the subject"<<i+1<<": ";
		os<<sv.marks[i]<<endl;
	}
	return os;
}
void bubble_sort(student sv[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			double average1=(sv[j].marks[0]+sv[j].marks[1]+sv[j].marks[2])/3;
			double average2=(sv[j+1].marks[0]+sv[j+1].marks[1]+sv[j+1].marks[2])/3;
			if(average1>average2){
				student tmp=sv[j];
				sv[j]=sv[j+1];
				sv[j+1]=tmp;
			}
		}
	}
}
int main(){
	cout<<"enter of the quantity of the student:"<<endl;
	int n;
	cin>>n;
	student sv[100];
	for(int i=0;i<n;i++){
		cin>>sv[i];
	}
	bubble_sort(sv,n);
	for(int i=0;i<n;i++){
		cout<<sv[i];
	}
	return 0;
}
