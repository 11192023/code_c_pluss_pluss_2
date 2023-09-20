#include<iostream>
using namespace std;
struct sinhvien{
	char ma[20];
	char ten[50];
	char lop[20];
	double gpa;
};
typedef struct sinhvien sv;
int main(){
	sv a;
	scanf("%s",a.ma);
	getchar();
	gets(a.ten);
	scanf("%lf%s",&a.gpa,a.lop);
	printf("%s %s %.2f %s",a.ma,a.ten,a.gpa,a.lop);
	return 0;
	
	

}
