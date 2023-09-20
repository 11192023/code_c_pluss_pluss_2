#include<iostream>
using namespace std;
class Employee{
	private:
		string first_name;
		string last_name;
		double a_monthly_salary;
	public:
		Employee(const string & first_name,const string & last_name,double a_monthly_salary){
			this->first_name=first_name;
			this->last_name=last_name;
			if(a_monthly_salary>0.0){
				this->a_monthly_salary=a_monthly_salary;
			}else{
				this->a_monthly_salary=0.0;
			}
		}
		void  setfirstname(const string & first_name){
			this->first_name=first_name;
		}
		void setlastname(const string & last_name){
			this->last_name=last_name;
		}
		void setamonthlysalary(double a_monthly_salary){
			if(a_monthly_salary>0.0){
				this->a_monthly_salary=a_monthly_salary;
			}
			else{
				this->a_monthly_salary=0.0;
			}
		}
		string getfirstname()const{
			return first_name;
		}
		string getlastname()const{
			return last_name;
		}
		double getamonthlysalary()const{
			return a_monthly_salary;
		}
		double getyearlyofsalary()const{
			return a_monthly_salary*12;
		}
		void giveraise(double percentage){
			double raise=a_monthly_salary*(percentage/100);
			a_monthly_salary+=raise;
		}
};
int main(){
	Employee emp1("HUNG","DO",5000.000);
	Employee emp2("NGAN","VUONG",4000.000);
	cout<<"list of the employee and salary"<<endl;
	cout<<"employee 1: "<<endl;
	cout<<"yearly of "<<emp1.getfirstname()<<" "<<emp1.getlastname()<<" :$"<<emp1.getyearlyofsalary()<<endl;
	cout<<"employee 2: "<<endl;
	cout<<"yearly of "<<emp2.getfirstname()<<" "<<emp2.getlastname()<<" :$"<<emp2.getyearlyofsalary()<<endl;
	cout<<"list of the employee and salary after raise ten percentage"<<endl;
	emp1.giveraise(10);
	emp2.giveraise(10);
    cout<<"update salary for employee 1 after raise ten percentage"<<endl;
    cout<<"yearly of "<<emp1.getfirstname()<<" "<<emp1.getlastname()<<" after raise ten percentage: $"<<emp1.getyearlyofsalary()<<endl;
    cout<<"update salary for employee 2 after raise ten percentage"<<endl;
    cout<<"yearly of "<<emp2.getfirstname()<<" "<<emp2.getlastname()<<" after raise ten percentage: $"<<emp2.getyearlyofsalary()<<endl;
    return 0;
}