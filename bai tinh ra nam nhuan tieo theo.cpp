#include<iostream>
using namespace std;
class date{
	private:
		string year;
		string month;
		string  day;
	public:
		date()=default;
		date(const string &year,const string &month,const string &day){
			this->year=year;
			this->month=month;
			this->day=day;
		}
		friend istream&operator>>(istream&in,date &da);
		friend ostream&operator<<(ostream&os,const date&da);
		string getyear(){
			return this->year;
		}
		string getmonth(){
			return this->month; 
		}
		string getday(){
			return this->day;
		}
	friend int number_of_the_leap(const date& d);
	friend int the_number_of_day_between_date1_and_date2(const date& a,const date &b);
};
istream&operator>>(istream&in,date&da){
	cout<<"enter of the year: ";
	in>>da.year;
	cout<<"enter of the month: ";
	in>>da.month;
	cout<<"enter of the day: ";
	in>>da.day;
	return in;
}
ostream&operator<<(ostream&os,const date&da){
	cout<<da.year<<" "<<da.month<<" "<<da.day;
	return os;
}
const int date_of_month[12]={31, 28, 31, 30, 31, 30, 
       31, 31, 30, 31, 30, 31};
    int number_of_the_leap(const date &d){
    	int year=stoi(d.year);
    	if(stoi(d.month)<=2){
    		year--;
		}
		return year/4-year/100+year/400;
	}
  int the_number_of_day_between_date1_and_date2(const date &a,const date& b){
  	int year=stoi(a.year);
  	int day=stoi(a.day);
  	int month=stoi(a.month);
  	int n1=365*year+day;
  	for(int i=0;i<month-1;i++){
  		n1+=date_of_month[i];
	  }
	  n1+=number_of_the_leap(a);
  	int year1=stoi(b.year);
  	int day1=stoi(b.day);
  	int month1=stoi(b.month);
  	int n2=365*year1+day1;
  	for(int i=0;i<month1-1;i++){
  		n2+=date_of_month[i];
	  }
	  n2+=number_of_the_leap( b);
	  return (n2-n1);
  }
int main(){
	date da1("2019","10","1");
	date da2("2020","11","2");
	int sum=the_number_of_day_between_date1_and_date2( da1,da2);
	cout<<sum;
	return 0;
}
