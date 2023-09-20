#include<iostream>
using namespace std;
struct MyDate{
	int year;
	int month;
	int day;
	void input_date(){
		cout<<"enter of the year: ";
		cin>>year;
		cout<<"enter of the month: ";
		cin>>month;
		cout<<"enter of the day: ";
		cin>>day;
	}
	void output_date(){
		cout<<"Date: "<<year<<" "<<month<<" "<<day<<endl;
	}
	int get_max_day_in_the_month(int month,int year){
		int maxday=31;
		if(month==2){
			if(year%4==0&&year%100!=0||year%400==0){
				maxday=29;
			}else{
			maxday=28;
			}
		}
		else if(month==4||month==6||month==9||month==11){
			maxday=30;
		}
		return maxday;
	}
	MyDate next_date(){
		MyDate next;
		next.year=year;
		next.month=month;
		next.day=day;
		next.day++;
		if(next.day>get_max_day_in_the_month(next.month,next.year)){
			next.day=1;
			next.month++;
			if(next.month>12){
				next.month=1;
				next.year++;
			}
		}
		return next;
	}
	MyDate previous_date(){
		MyDate previous;
		previous.year=year;
		previous.month=month;
		previous.day=day;
		previous.day--;
		if(previous.day==0){
			previous.month--;
			if(previous.month==0){
				previous.month=12;
				previous.year--;
			}
			previous.day=get_max_day_in_the_month(previous.month,previous.year);
		}
		return previous;
	}
};
int main(){
	MyDate date;
	date.input_date();
	date.output_date();
	MyDate nextdate=date.next_date();
	cout<<"the next day: ";
	nextdate.output_date();
	MyDate previousdate= date.previous_date();
	cout<<"the previous day: ";
	previousdate.output_date();
	return 0;
	}
