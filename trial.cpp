#include<iostream>
using namespace std;
struct MyDate{
	int year;
	int month;
	int day;
	void input_data();
	void out_data();
	MyDate next_date();
	MyDate previous_date();
};
void MyDate::input_data(){
	cout<<"enter of the year: "<<endl;
	cin>>year;
	cout<<"enter of the month: "<<endl;
	cin>>month;
	cout<<"enter of the day: "<<endl;
	cin>>day;
}
void MyDate::out_data(){
	cout<<"year: "<<year<<endl;
	cout<<"month: "<<month<<endl;
	cout<<"day: "<<day<<endl;
}
int daymax(int month,int year){
	int day_max=31;
	if(month==2){
		if(year%4==0&&year%100!=0||year%400==0){
			day_max=29;
		}
		else{
			day_max=28;
		}
	}else if (month ==4||month==6||month==9||month==11){
		day_max=30;
	}
	return day_max;
}
MyDate MyDate::next_date(){
	MyDate next;
	next.year=year;
	next.month=month;
	next.day=day;
	next.day++;
	if(next.day>daymax(next.month,next.year)){
		next.day=1;
		next.month++;
		if(next.month>12){
			next.month=1;
			next.year++;
		}
	}
	return next;
}
MyDate MyDate::previous_date(){
	MyDate previous;
	previous.year=year;
	previous.month=month;
	previous.day=day;
	previous.day--;
	if(previous.day<0){
		previous.month--;
		if(previous.month<0){
			previous.month=12;
			previous.year--;
		}
		previous.day=daymax(previous.month,previous.year);
	}
	return previous;
}
int main(){
	MyDate date;
	cout<<"enter of the date:"<<endl;
	date.input_data();
	date.out_data();
	MyDate next=date.next_date();
	cout<<"next day: "<<endl;
	next.out_data();
	MyDate previous=date.previous_date();
	cout<<"previous day: "<<endl;
	previous.out_data();
	return 0;
}

