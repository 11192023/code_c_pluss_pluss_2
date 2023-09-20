#include<iostream>
#include<cmath>
using namespace std;
class MyPoint{
	double x;
	double y;
	 public:
	 	void f1(){
	 		cout<<"enter the x coordinate: ";
	 		cin>>x;
	 		cout<<"enter the y coordinate: ";
	 		cin>>y;
		 }
		 void f2(){
		 	cout<<"the coordinate of MyPoint "<<"("<<x<<" , "<<y<<")"<<endl;
		 }
		 friend double f3(const MyPoint& obj1,const MyPoint& obj2);
};
double f3(const MyPoint &obj1,const MyPoint &obj2){
	double distance =sqrt(pow(obj2.x-obj1.x,2)+pow(obj2.y-obj1.y,2));
	return distance;
}
int main(){
	MyPoint point1,point2;
	cout<<"enter the data for point 1: "<<endl;
	point1.f1();
	cout<<"enter the data for point 2: "<<endl;
	point2.f1();
	cout<<"point 1: "<<endl;
	point1.f2();
	cout<<"point 2: "<<endl;
	point2.f2();
	double distance=f3(point1,point2);
	cout<<"the distance between point1 and point2: "<<distance<<endl;
	return 0;
}