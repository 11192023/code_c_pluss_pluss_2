#include<iostream>
using namespace std;
struct Person{
	string name;
	int age;
	string address;
	Person(){
	}
	Person(string n,int a,string ad){
		name=n;
		age=a;
		address=ad;
	}
	void nhapthongtin(){
		cin>>name>>age>>address;
	}
	void inthongtin(){
		cout<<name<<" "<<age<<" "<<address;
	}
};
int main(){
	Person connguoi=Person("Nam",20,"Ha Noi");
	Person *pconnguoi=&connguoi;
	cout<<pconnguoi->name<<" "<<pconnguoi->age<<" "<<pconnguoi->address;
	return 0;
}