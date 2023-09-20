#include<stdio.h>

struct hocsinh{
	char ten[50];
	double diem;
};
typedef struct hocsinh HS;
HS nhap(){
	HS x;
	fgets(x.ten);
	scanf("%lf",&x.diem);
	return x;
}
void in(HS a){
	printf("%s %.2lf\n",a.ten,a.diem);
}
int main (){
	HS a=nhap();
	in(a);
}
