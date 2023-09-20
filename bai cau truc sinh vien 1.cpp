#include<iostream>
#include<string>
using namespace std ;
class sinhvien{
	private:
		string name;
		string date;
		double mark1;
		double mark2;
	    double mark3;
	public:
		sinhvien()=default;
		sinhvien(string name,string date,double mark1,double mark2,double mark3){
			this->name=name;
			this->date=date;
		    this->mark1=mark1;
		    this->mark2=mark2;
		    this->mark3=mark3;
		}
		friend istream&operator>>(istream&in,sinhvien&sv);
		friend ostream&operator<<(ostream&os,const sinhvien&sv);
		void optimal(){
		
		if(date[2]!='/'){
    	date.insert(0,"0");
	}if(date[5]!='/'){
		date.insert(3,"0");
	}
}
};
istream&operator>>(istream&in,sinhvien&sv){
	cout<<"enter the name for student: ";
	in.ignore();
	getline(in,sv.name);
	cout<<"enter the date for student: ";
	in>>sv.date;
	cout<<"enter the subject 1 of student: ";
	in>>sv.mark1;
	cout<<"enter the subject 2 of student: ";
	in>>sv.mark2;
	cout<<"enter the subject 3 of student: ";
	in>>sv.mark3;
	return in;
}
ostream&operator<<(ostream&os, const sinhvien&sv){
	os<<"name of the student "<<sv.name<<endl;
    sinhvien tmp=sv;
    tmp.optimal();
    os<<"date of the student "<<tmp.date<<endl;
	os<<"sum point of subject of the student: "<<sv.mark1+sv.mark2+sv.mark3<<endl;
	return os;
}


int main(){
	cout<<"enter the quanlity student for school"<<endl;
	int n;cin>>n;
	sinhvien sv[100];
	for(int i=0;i<n;i++){
		cin>>sv[i];
	}
	for(int i=0;i<n;i++){
		cout<<sv[i];
	}
	return 0;
}