#include<iostream>
using namespace std;
struct student{
	int the_subject_1;
	int the_subject_2;
	int the_subject_3;
	char the_area;
	char the_object;
};
void input(student &a){
	cout<<"enter of the subject 1: ";
	cin>>a.the_subject_1;
	cout<<"enter of the subject 2: ";
	cin>>a.the_subject_2;
	cout<<"enter of the subject 3: ";
	cin>>a.the_subject_3;
	cout<<"enter of the area: ";
	cin>>a.the_area;
	cout<<"enter of the object: ";
	cin>>a.the_object;
}
void output(student &a){
	cout<<"the subject 1: "<<a.the_subject_1<<endl;
	cout<<"the subject 2: "<<a.the_subject_2<<endl;
	cout<<"the subject 3: "<<a.the_subject_3<<endl;
	cout<<"the area: "<<a.the_area<<endl;
	cout<<"the object: "<<a.the_object<<endl;
}
double the_point_is_produced_in_the_especially_area(const student &a){
	double point =0;
	if(a.the_area=='A'){
		point = 2;
	}else if(a.the_area=='B'){
		point =1;
	}else{
		point =0.5;
	}
	return point;
}
double the_point_is_produced_in_the_especially_odject(const student &a){
	double point =0;
	if(a.the_area=='1'){
		point= 2.5;
	}else if(a.the_area=='2'){
		point=2.0;
	}else {
		point =1.0;
	}
	return point;
}
int the_point_of_the_student(const student &a){
	double point=0;
	point =the_point_is_produced_in_the_especially_odject(a)+the_point_is_produced_in_the_especially_area(a)+a.the_subject_1+a.the_subject_2+a.the_subject_3;
	return point;
}
int main(){
	cout<<"the number of the student participated in the exam: ";
	int n;
	cin>>n;
	student a[n];
	for(int i=0;i<n;i++){
		cout<<"the student "<<i+1<<endl;
		input(a[i]);
	}
	cout<<"enter of the benchmark"<<endl;
	int c;
	cin>>c;
	while(1){
		cout<<"----the list of the choose-----"<<endl;
		cout<<"1.the list of the student in the exam"<<endl;
		cout<<"2.the list of the student pass away in the exam"<<endl;
		cout<<"3.the list of the student fall in the exam"<<endl;
		cout<<"4.close"<<endl;
		cout<<"inviting you choose these oppsion above"<<endl;
		int x;
		cin>>x;
		if(x==1){
			cout<<"the list of the student in the exam"<<endl;
			for(int i=0;i<n;i++){
				output(a[i]);
			}
		}
		else if(x==2){
			cout<<"the list of the student pass away in the exam"<<endl;
			for(int i=0;i<n;i++){
				if(the_point_of_the_student(a[i])>=c){
					output(a[i]);
				}
			}
		} 
		else if(x==3){
			cout<<"the list of the student fall in the exam"<<endl;
			for(int i=0;i<n;i++){
				if(the_point_of_the_student(a[i])<c){
					output(a[i]);
				}
			}
		}
		else{
			break;
		}
	}
	return 0;
}