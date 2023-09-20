#include<iostream>
using namespace std;
class Employee{
	protected:
		string first_name;
		string last_name;
		int id;
		string date_of_birth;
		int basic_salary;
	public:
		virtual double camputeSalary(double rate){
			return this->basic_salary;
		}
		Employee(string first_name,string last_name,int id,string date_of_birth,int basic_salary){
			this->first_name=first_name;
			this->last_name=last_name;
			this->id=id;
			this->date_of_birth=date_of_birth;
			this->basic_salary=basic_salary;
		}
		friend istream&operator>>(istream&in,Employee&);
		friend ostream&operator <<(ostream&os,const Employee&);
		friend bool operator >(const Employee&,const Employee&);
};
istream&operator >>(istream& in,Employee&emp){
	cout<<"enter of the first name:"<<endl;
	in>>emp.first_name;
	cout<<"enter of the last name:"<<endl;
	in>>emp.last_name;
	cout<<"enter of the id:"<<endl;
	in>>emp.id;
	cout<<"enter of the date of birth:"<<endl;
	in>>emp.date_of_birth;
	cout<<"enter of the bassic salary:";
	in>>emp.basic_salary;
	return in;
}
ostream&operator<<(ostream& os,const Employee&emp){
	os<<"first name: "<<emp.first_name<<endl;
	os<<"last_name: "<<emp.last_name<<endl;
	os<<"id: "<<emp.id<<endl;
	os<<"date of salary: "<<emp.date_of_birth<<endl;
	os<<"basic salary: "<<emp.basic_salary<<endl;
	return os;
}
bool operator>(const Employee&emp1,const Employee&emp2){
	return emp1.date_of_birth>emp2.date_of_birth;
}
class Manager:public Employee{
	private:
		string role;
	public:
		Manager(string first_name,string last_name,int id,string date_of_birth,int basic_salary,string role):
			Employee(first_name,last_name,id,date_of_birth,basic_salary),role(role){}
		double computeSalary(double rate){
			return basic_salary+(0.1+rate)*basic_salary;
		}
		friend istream&operator>>(istream&in,Manager&);
		friend ostream&operator<<(ostream&os,const Manager&);
};
istream&operator >>(istream&in ,Manager&manager){
	in>>static_cast<Employee&>(manager);
	cout<<"enter of the role:"<<endl;
	in>>manager.role;
	return in;
}
ostream&operator<<(ostream&os,const Manager&manager){
	os<<static_cast<const Employee&>(manager);
	os<<"role: "<<manager.role;
	return os;
}
class Engineer:public Employee{
	public:
		Engineer(string first_name ,string last_name,int id, string date_of_birth,int basic_salary):
		Employee(first_name, last_name ,id,date_of_birth,basic_salary){}
		double computeSalary(double rate){
			return basic_salary +rate *basic_salary;
		}
		friend istream&operator >>(istream&in,Engineer&);
		friend ostream&operator <<(ostream&os,const Engineer&);
};
istream &operator >>(istream&in,Engineer&engineer){
	in>>static_cast<Employee&>(engineer);
	return in;
}
ostream &operator <<(ostream&os ,const Engineer&engineer){
	os<<static_cast<const Employee &> (engineer);
	return os;
}
void camputeAllSalaries(Employee*emp[],int n){
	for(int i=0;i<n;i++){
		Manager*manager=dynamic_cast<Manager*>(emp[i]);
		Engineer*engineer=dynamic_cast<Engineer*>(emp[i]);
		if(manager!=nullptr){
			cout<<"salary manager: "<<manager->computeSalary(0.1)<<endl;
		}else if( engineer!=nullptr){
			cout<<"salary engineer: "<<engineer->camputeSalary(0.2)<<endl;
		}
	}
}
void sort(Employee*emp[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(*emp[j]>*emp[j+1]){
				Employee*tmp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=tmp;
			}
		}
	}
}
int main(){
	cout<<"enter of the quantity:"<<endl;
	int size;
	cin>>size;
	Employee*employee[size];
	for(int i=0;i<size;i++){
		char choice;
		cout<<"choice employee type(M and m is manager or E and e is engineer:"<<endl;
		cin>>choice;
		switch(choice){
			case 'M':
			case 'm':
				employee[i]=new Manager("","",0,"",0,"");
				cin>>*(static_cast<Manager*>(employee[i]));
				break;
			case 'E':
			case'e':
				employee[i]=new Engineer("","",0,"",0);
				cin>>*(static_cast <Engineer*>(employee[i]));
				break;
			default:
				cout<<"invalid choice!"<<endl;
				i--;
				break;
		}
	}
	camputeAllSalaries(employee,size);
	sort(employee,size);
	for(int i=0;i<size;i++){
		cout<<*employee[i]<<" ";
	}
	for(int i=0;i<size;i++){
		delete employee[i];
	}
	return 0;
}