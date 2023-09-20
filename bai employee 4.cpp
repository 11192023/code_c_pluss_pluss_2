#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee{
	private:
	string first_name;
	string last_name;
	double salary;
	string department;
	public:
		Employee()=default;
		Employee(string first_name,string last_name,double salary,string department){
			this->first_name=first_name;
			this->last_name=last_name;
			this->salary=salary;
			this->department=department;
		}
		double get_salary()const{
		
		return this->salary;
		}
		friend istream&read(istream&,Employee&);
		friend ostream&write(ostream&,Employee&);
};
istream&read(istream&is,Employee&employee){
	is>>employee.first_name>>employee.last_name>>employee.salary>>employee.department;
	return is;
}
ostream&write(ostream&os,Employee&employee){
	os<<employee.first_name<<employee.last_name<<employee.salary<<employee.department;
	return os;
}
int main(){
	fstream myfile("list_employee.bin",ios::out|ios::binary);
	Employee employee_list[5];
	for(int i=0;0<5;i++){
		read(cin,employee_list[i]);
		if(myfile.is_open()){
			myfile.write((char*)&employee_list[i],sizeof(employee_list[i]));
		}
		else{
			cout<<"khong the mo duoc file";
		}
	}
	myfile.close();
	return 0;
}

