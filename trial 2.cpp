#include<iostream>
using namespace std;
class Employee{
	private:
		string first_name;
		string last_name;
		double a_monthly_salary;
	public:
		Employee(const string &first_name ,const string &last_name ,double a_monthly_salary){
			this ->first_name=first_name;
			this->last_name=last_name;
			if(a_monthly_salary>0.0){
				this->a_monthly_salary=a_monthly_salary;
			}else{
				this->a_monthly_salary=0.0;
			}
		}
		string  getfirstname()const{
			return first_name;
		}
		string getlastname()const{
			return last_name;
		}
		double getamonthlysalary()const{
			return a_monthly_salary;
		}
		double getayearlysalary()const{
			return a_monthly_salary*12;
		}
		void setfirstname(const string &first_name){
			this->first_name=first_name;
		}
		void setlastname(const string &last_name){
			this->last_name=last_name; 
		}
		void setamonthly(double a_monthly_salary){
			this->a_monthly_salary=a_monthly_salary;
		}
		void raise(double percentage){
			double raisesalary=a_monthly_salary *(percentage/100);
			a_monthly_salary+=raisesalary;
		}
};
int main(){
	Employee thefirst("HUNG","DO",500.000);
	Employee thesecond("NGAN","VUONG",600.000);
	cout<<"list of the salary of the employee"<<endl;
	cout<<"yearly salary of "<<thefirst.getfirstname()<<" "<<thefirst.getlastname()<<" :$"<<thefirst.getayearlysalary()<<endl;
	cout<<"yearly salary of "<<thesecond.getfirstname()<<" "<<thesecond.getlastname()<<" :$"<<thesecond.getayearlysalary()<<endl;
	cout<<"list of the salary after when raise ten percentage in the year work"<<endl;
	thefirst.raise(10) ;
	thesecond.raise(10);
	cout<<"yearly salary of "<<thefirst.getfirstname()<<" "<<thesecond.getlastname()<<" :$"<<thefirst.getayearlysalary()<<endl;
	cout<<"yearly salary of "<<thefirst.getfirstname()<<" "<<thesecond.getlastname()<<" :$"<<thesecond.getayearlysalary()<<endl;
	return 0; 
	
}