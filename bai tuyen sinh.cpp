#include<iostream>
#include<cmath>
#include<string>
#include <sstream>
using namespace std;
	class sinhvien{
		private:
			string code;
			string codeofstudent;
			string name;
			string date;
			double math;
			double phisical;
			double chemical;
			static int dem;
			
		public:
			sinhvien()=default;
			sinhvien(const string &code,const string &codeofstudent,const string &name,const string &date,double math,double phisical,double chemical){
				this->code=code;
				this->codeofstudent=codeofstudent;
				this->name=name;
				this->date=date;
				this->math=math;
				this->phisical=phisical;
				this->chemical=chemical;
			}
			friend istream&operator >>(istream&in,sinhvien&sv);
			friend ostream&operator <<(ostream&os,const sinhvien &sv);
			void date1();
			void name1();
			string getarea();
	};
	int sinhvien::dem=0;
	void optimal(string &s){
		s[0]=toupper(s[0]);
		for(int i=1;i<s.length();i++){
			s[i]=tolower(s[i]);
		}
	}
	void sinhvien::name1(){
		string res=name;
		stringstream ss(res);
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
	}
	void sinhvien::date1(){
		if(date[2]!='/'){
			date.insert(0,"0");
		}
		if(date[5]!='/'){
		date.insert(3,"0");
		}
	}
	istream&operator>>(istream&in,sinhvien &sv){
		sinhvien::dem++;
		sv.code="SV"+string(3-to_string(sinhvien::dem).length(),'0')+to_string(sinhvien::dem);
	    cout<<"enter of the code of the code of the student:"<<endl;
	    in>>sv.codeofstudent;
	    cout<<"enter of the name of the student: "<<endl;
	    in.ignore();
	    getline(in,sv.name);
	    cout<<"enter of the date of the student: "<<endl;
	    in>>sv.date;
	    cout<<"enter of the point of the math: "<<endl;
	    in>>sv.math;
	    cout<<"enter of the point of the phisical: "<<endl;
	    in>>sv.phisical;
	    cout<<"enter of the point of the chemical: "<<endl;
	    in>>sv.chemical;
	    return in;
	}
	string sinhvien::getarea(){
		string tmp="";
		for(int i=0;i<codeofstudent.length()-1;i++){
			tmp+=codeofstudent[i];
		}
		return tmp;
	}
	ostream&operator<<(ostream&os,const sinhvien &sv){
		double sumofpoint=0.0;
		double comefirst;
		sinhvien cmd=sv;
		string area=cmd.getarea();
		if(area=="KV1"){
			comefirst=0.5;
		}else if(area=="KV2"){
			comefirst=1.0;
		}
		else{
			comefirst=1.5;
		}
		sumofpoint=sv.math+sv.phisical+sv.chemical+comefirst;
		double floatpoint=round(sumofpoint*10)/10-floor(sumofpoint);
		os<<"code of the student: "<<sv.code<<endl;
		os<<"code of the student when join exam: "<<sv.codeofstudent<<endl;
		sinhvien tmp=sv;
		tmp.name1();
		os<<"name of the student: "<<tmp.name<<endl;
		sinhvien cmp=sv;
		cmp.date1();
		os<<"date of the student: "<<cmp.date<<endl;
		os<<"area of student: "<<area[area.length()-1]<<endl;
		os<<"sum of the point: "<<(floatpoint==0?round(sumofpoint):floor(sumofpoint)+floatpoint)<<endl;
		os<<"result: "<<(sumofpoint>=26?"PASS":"FALSE")<<endl;
		return os;
	}
int main(){
	cout<<"enter of the quantity of the student"<<endl;
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