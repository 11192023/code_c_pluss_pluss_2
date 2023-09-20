#include<iostream>
using namespace std;
class Employee{
	private:
		string first_name;
		string last_name;
	public:
		Employee()=default;
		Employee(string first_name ,string last_name){
			this->first_name =first_name;
			this->last_name=last_name;
		}
		friend istream&operator>>(istream&in,Employee&a){
			in>>a.first_name;
			in>>a.last_name;
			return in;
		}
		friend ostream&operator<<(ostream&out,Employee a ){
			out<<a.first_name<<" "<<a.last_name;
			return out;
		}
};
int main(){
	Employee a;
	cin>>a;
	cout<<a;
	return 0;
}

