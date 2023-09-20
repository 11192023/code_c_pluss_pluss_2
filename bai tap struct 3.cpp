#include<iostream>
using namespace std;
struct hocsinh{
	char ten[100];
	double diem;
};
typedef struct hocsinh HS;
void nhap(HS*x){	
    gets(x->ten);
	scanf("%2.lf",&x->diem);
}
void in(HS a){
	printf("%s %.2lf\n",a.ten,a.diem);
}
int main (){
	HS a;
	nhap(&a);
	in(a);
}
