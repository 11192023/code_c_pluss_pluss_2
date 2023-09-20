#include<iostream>
#include<string>
#include<sstream>
using namespace std;
class employee{
	private:
		string code;
		string name;
		string sex;
		string date;
		string address;
		long long taxnumber;
		string signdate;
		static int dem;
	public:
		employee(const string &code,const string &name,const string &sex,const string &date,const string &address,long long taxnumber,const string &signnumber){
			this->code=code;
			this->name=name;
			this->sex=sex;
			this->date=date;
			this->address=address;
			this->taxnumber=taxnumber;
			this->signdate=signnumber;
		}
		employee()=default;
		friend istream&operator>>(istream&in,employee& emp);
		friend ostream&operator<<(ostream&os,const employee&emp);
		void name1();
		void date1()const;
		string getcode(){
			return code;
		}
		double gettaxnumber()const{
			return taxnumber;
		}
		string getdate()const{
			return date;
		}
	    string getsigndate()const{
	    	return signdate;
		}
		void date4()const;
		
		};
		void employee::date4()const{
			string date3=getsigndate();
			if(date3[2]!='/'){
				date3.insert(0,"0");
			}if(date3[5]!='/'){
				date3.insert(3,"0");
			}
		}
		void employee:: date1()const{
			string date2=getdate();
			if(date2[2]!='/'){
				date2.insert(0,"0");
			}
			if(date2[5]!='/'){
				date2.insert(3,"0");
			}
		}
		void optimal(string &s){
			s[0]=toupper(s[0]);
			for(int i=1;i<s.length();i++){
				s[i]=tolower(s[i]);
			}
		}
		void employee::name1(){
			string res=name;
			stringstream ss(res);
			string token;
			const int max=100;
			string word[max];
			int count =0;
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
		int employee::dem=0;
		istream&operator>>(istream&in,employee&emp){
			employee::dem++;
			emp.code=string(5-to_string(employee::dem).length(),'0')+to_string(employee::dem);
			cout<<"enter of the name: ";
			in.ignore();
			getline(in,emp.name);
			cout<<"enter of the sex: ";
			in>>emp.sex;
			cout<<"enter of the date: ";
			in>>emp.date;
			cout<<"enter of the address: ";
			in.ignore();
			getline(in,emp.address);
			cout<<"enter of the tax number: ";
			in>>emp.taxnumber;
			cout<<"enter of the sign date: ";
			in>>emp.signdate;
			return in;
		}
		ostream&operator<<(ostream&os,const employee&emp){
			os<<"code: "<<emp.code<<endl;
			employee tmp=emp;
			tmp.name1();
			os<<"name: "<<tmp.name<<endl;
			employee cmp=emp;
			cmp.date1();
			os<<"date: "<<cmp.date<<endl;
			os<<"address: "<<emp.address<<endl;
			employee tcm=emp;
			tcm.gettaxnumber();
			os<<"tax number: "<<tcm.taxnumber<<endl;
			employee ctm=emp;
			ctm.date4();
			os<<"sign date: "<<ctm.getsigndate()<<endl;
			return os;
		}
int main(){
	cout<<"enter of the quantity: ";
	int n;
	cin>>n;
	employee emp[100];
    for(int i=0;i<n;i++){
    	cin>>emp[i];
	}
	for(int i=0;i<n;i++){
		cout<<emp[i];
	}
	return 0;
}