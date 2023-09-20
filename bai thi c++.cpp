#include<iostream>
using namespace std ;
class student {
	private:
		string name ;
		string age;
	public:
		student()=default;
		student(string name,string age);
		student(const student &res){
			cout<<"copy";
			this->name=res.name;
			this->age=res.age;
		}
		student &operator=(const student&res){
			if(this!=&res){
			cout<<"assignment";
			this->name=res.name;
			this->age=res.age;
			return *this;
		}
		}
		friend istream&operator>>(istream&in,student &res);
		friend ostream&operator<<(ostream&os,const student &res);
};
istream&operator>>(istream&in,student&res){
	cout<<"enter of the name: ";
	in.ignore();
	getline(in,res.name);
	cout<<"enter of the age: ";
	in>>res.age;
	return in;
}
ostream&operator<<(ostream&os,const student&res){
	os<<"name: "<<res.name<<endl;
	os<<"age: "<<res.age<<endl;
	return os;
}
int main(){
	student t1,t2;
	cin>>t1>>t2;
	t1=t2;
	cout<<t1<<endl;
	
	return 0;
}
