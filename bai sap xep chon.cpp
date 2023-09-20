#include<iostream>
using namespace std;
struct Student{
    string name="";
    int id;
    double marks[3];
};
void read(Student &student ){
    cout<<"enter of the name: ";
    cin.ignore();
    getline(cin,student.name);
    cout <<"enter of the id: ";
    cin>>student.id;
    cout<<"enter of the marks (3 of the subject)"<<endl;
    for(int i=0;i<3;i++){
    	cout<<"enter of the subject "<<i+1<<" :";
        cin>>student.marks[i];
    }
}
void print(const Student &student ){
    cout<<"name: "<<student.name<<endl;
    cout<<"id: "<<student.id<<endl;
    cout<<"marks: ";
    for(int i=0;i<3;i++){
        cout<<student.marks[i]<<" ";
    }
    cout<<endl;
}
void f3(Student list_of_student[],unsigned &size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            int avg1=(list_of_student[j].marks[0]+list_of_student[j].marks[1]+list_of_student[j].marks[2])/3;
            int avg2=(list_of_student[j+1].marks[0]+list_of_student[j+1].marks[1]+list_of_student[j+1].marks[2])/3;
            if(avg1>avg2){
                Student tmp=list_of_student[j];
                list_of_student[j]=list_of_student[j+1];
                list_of_student[j+1]=tmp;
            }
        }
    }
}
int main(){
    cout<<"enter of the size ";
    unsigned size ;
    cin>>size;
    Student list_of_student[100];
    cout<<"enter of the list of student "<<endl;
    for(int i=0;i<size;i++){
        read(list_of_student[i]);
    }
    f3(list_of_student,size);
    cout<<"list of the student have to average to sort"<<endl;
    for(int i=0;i<size;i++){
        cout<<"student "<<i+1<<" :"<<endl;
        print(list_of_student[i]);
    }
    return 0;
}

