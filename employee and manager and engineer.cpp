#include<iostream>
#include<string>
using namespace std;
class Employee{
	protected:
		string first_name;
		string last_name;
		int id;
		string date_of_birth;
		int basic_salary;
	public:
		Employee(string first_name,string last_name,int id,string date_of_birth,int basic_salary){
			this->first_name=first_name;
			this->last_name=last_name;
			this->id=id;
			this->date_of_birth=date_of_birth;
			this->basic_salary=basic_salary;
		}
		virtual double cumputeSalary(double rate){
			return this->basic_salary;
		}
		friend istream&operator >>(istream&in,Employee&employees);
		friend ostream&operator<<(ostream&os,const Employee&employees);
		friend bool operator >(const Employee&emp1,const Employee&emp2);
};
istream&operator >>(istream&in,Employee&employees){
	cout<<"enter of the first name: "<<endl;
	in>>employees.first_name;
	cout<<"enter of the last name: "<<endl;
	in>>employees.last_name;
	cout<<"enter of the id: "<<endl;
	in>>employees.id;
	cout<<"enter of the date of birth: "<<endl;
	in>>employees.date_of_birth;
	cout<<"enter of the basic salary: "<<endl;
	in>>employees.basic_salary;
	return in;
}
ostream&operator <<(ostream&os,const Employee&employees ){
	os<<"first name: "<<employees.first_name<<endl;
	os<<"last_name: "<<employees.last_name<<endl;
	os<<"id: "<<employees.id<<endl;
	os<<"date of birth: "<<employees.date_of_birth<<endl;
	os<<"basic salary: "<<employees.basic_salary;
	return os;
}
bool operator> (const Employee&emp1,const Employee&emp2){
	return emp1.date_of_birth > emp2.date_of_birth;
}
class Manager :public Employee{
	private:
		string role;
	public:
		Manager(string first_name,string last_name,int id,string date_of_birth,int basic_salary,string r)
		:	Employee(first_name,last_name,id,date_of_birth,basic_salary),role(r){}
		double computeSalary(double rate){
			return basic_salary+(0.1+rate)*basic_salary;
		}
		friend istream&operator>>(istream&in,Manager &managers);
		friend ostream&operator <<(ostream&os,const Manager&managers);
		};
		istream&operator>>(istream&in,Manager&managers){
			in>>static_cast<Employee&>(managers);
			cout<<"enter of the role: "<<endl;
			in>>managers.role;
			return in;
		}
		ostream &operator<<(ostream&os,const Manager&managers){
			os<<static_cast<const Employee &>(managers);
			os<<"role: "<<managers.role;
			return os;
		}
		
class Engineer :public Employee{
	public:
		Engineer(string first_name,string last_name,int id,string date_of_birth,int basic_salary)
		:Employee(first_name,last_name,id,date_of_birth,basic_salary){};
		double computeSalary(double rate){
			return basic_salary+rate*basic_salary;
		}
		friend istream&operator>>(istream&in,Engineer&engineers);
		friend ostream&operator<<(ostream&os,const Engineer &engineers);
};		
istream&operator >>(istream&in,Engineer&engineers){
	in>>static_cast<Employee&>(engineers);
	return in;
}
ostream&operator<<(ostream&os,const Engineer&engineers){
	os<<static_cast<const Employee&>(engineers);
	return os;
}
void computeAllSalaries(Employee*emp[],int n){
	for(int i=0;i<n;i++){
		Manager *manager=dynamic_cast<Manager*>(emp[i]);
		Engineer*engineer=dynamic_cast<Engineer*>(emp[i]);
		if(manager!=nullptr){
			cout<<"manager salary: "<<manager->computeSalary(0.2)<<endl;
		}else if(engineer!=nullptr){
			cout<<"engineer salary: "<<engineer->computeSalary(0.1)<<endl;
		}
	}
}
void sort(Employee*emp[],int n){
	for(int i=0;i<n-1;i++){
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
	int size;
	cin>>size;
	Employee*employees[size];
	for(int i=0;i<size;i++){
		char choose;
		cout<<"choose employee type(M and m is Manager or E and e is Engineer:"<<endl;
		cin>>choose;
		switch (choose){
			case 'M':
			case 'm':
				employees[i]=new Manager("","",0,"",0,"");
				cin>>*(static_cast<Manager*>(employees[i]));
				break;
			case'E':
			case'e':
				employees[i]=new Engineer("","",0,"",0);
				cin>>*(static_cast <Engineer*>(employees[i]));
				break;
			default:
				cout<<"position invalid";
				i--;
				break;
		}
	}
	computeAllSalaries(employees,size);
	sort(employees,size);
	for(int i=0;i<size;i++){
		cout<<*employees[i]<<endl;
	}
	for(int i=0;i<size;i++){
		delete employees[i];
	}
	return 0;
}