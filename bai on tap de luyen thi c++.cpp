#include<iostream>
using namespace std;
class employee{
	protected:
		string first_name;
		string last_name;
		string id;
		string date_of_birth;
		double basic_salary;
	public:
		employee()=default;
		employee(string first_name,string last_name,string id,string date_of_birth,double basic_salary){
			this->first_name=first_name;
			this->last_name=last_name;
			this->id=id;
			this->date_of_birth=date_of_birth;
			this->basic_salary=basic_salary;
		}
		virtual double computesalary(double rate){
			return this->basic_salary;
		}
		friend istream&operator>>(istream&in,employee&emp);
		friend ostream&operator<<(ostream&os,const employee&emp);
		friend bool operator>(const employee&emp1,const employee&emp2){
			return emp1.date_of_birth > emp2.date_of_birth;
		}
};
istream&operator>>(istream&in,employee&emp){
	cout<<"enter of the first name: ";
	in>>emp.first_name;
	cout<<"enter of the last name: ";
	in>>emp.last_name;
	cout<<"enter of the id: ";
	in>>emp.id;
	cout<<"enter of the date  of birth: ";
	in>>emp.date_of_birth;
	cout<<"enter of the basic salary: ";
	in>>emp.basic_salary;
	return in;
}
ostream&operator<<(ostream&os,const employee&emp){
	os<<"first name: "<<emp.first_name<<endl;
	os<<"last_name: "<<emp.last_name<<endl;
	os<<"id: "<<emp.id<<endl;
	os<<"date of birth: "<<emp.date_of_birth<<endl;
	os<<"basic salary: "<<emp.basic_salary<<endl;
	return os;
}
class manager:public employee{
	private:
		string role;
	public:
		manager(string first_name,string last_name,string id,string date_of_birth,double basic_salary,string role):
			employee( first_name,last_name,id,date_of_birth, basic_salary){
				this->role=role;
			}
			double computesalary(double rate){
				return basic_salary+(0.1+rate)*basic_salary;
			}
			friend istream&operator>>(istream&in,manager&ma);
			friend ostream&operator<<(ostream&os,const manager&ma);
};
istream&operator>>(istream&in,manager&ma){
	in>>(static_cast<employee&>(ma));
	cout<<"enter of the role: ";
	in>>ma.role;
	return in;
}
ostream&operator<<(ostream&os,const manager&ma){
	os<<(static_cast<const employee&>(ma));
	os<<"role: "<<ma.role<<endl;
	return os;
}
class engineer:public employee{
	private:
		string role;
	public:
		engineer(string first_name,string last_name,string id,string date_of_birth,double basic_salary,string role):
			employee(first_name,last_name,id,date_of_birth,basic_salary){
				this->role=role;
			}
			double computesalary(int rate){
				return basic_salary+rate*basic_salary;
			}
			friend istream&operator>>(istream&in,engineer&eng);
			friend ostream&operator<<(ostream&os,const engineer&eng);
};
istream&operator>>(istream&in,engineer&eng){
	in>>(static_cast<employee&>(eng));
	cout<<"enter of the role: ";
	in>>eng.role;
	return in;
}
ostream&operator<<(ostream&os,const engineer&eng){
	os<<(static_cast<const employee&>(eng));
	os<<"the role of the engineer: ";
	os<<eng.role;
	return os;
}
void computeallsalary(employee*emp[],int n){
	for(int i=0;i<n;i++){
		manager* man=(dynamic_cast<manager*>(emp[i]));
		engineer*eng=(dynamic_cast<engineer*>(emp[i]));
		if(man!=nullptr){
			cout<<"manager salary: "<<man->computesalary(0.2)<<endl;
		}else if(eng!=nullptr){
			cout<<"engineer salary: "<<eng->computesalary(0.2)<<endl;
		}
	}
}
void bubble_sort(employee*emp[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(*emp[j]>*emp[j+1]){
				employee *tmp=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=tmp;
			}
		}
	}
}

int main(){
	cout<<"enter of the quantity: ";
	int n;
	cin>>n;
	employee *emp[n];
	for(int i=0;i<n;i++){
		char choose;
		cout<<"enter of the optional such guide m M or e E: "<<endl;
		cin>>choose;
		switch(choose){
			case 'm':
			case 'M':
				emp[i]=new manager("","","","",0.0,"");
				cin>>*(static_cast<manager*>(emp[i]));
				break;
			case 'e':
			case 'E':
				emp[i]=new engineer("","","","",0.0,"");
				cin>>*(static_cast<engineer*>(emp[i]));
				break;
			default:
				cout<<"invalid!";
				i--;
				break;
		}
	}
	computeallsalary(emp,n);
	bubble_sort(emp,n);
	for(int i=0;i<n;i++){
		cout<<*emp[i];
	}
	for(int i=0;i<n;i++){
		delete emp[i];
	}
	return 0;
}
