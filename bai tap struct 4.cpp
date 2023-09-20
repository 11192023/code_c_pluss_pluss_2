#include<stdio.h>

struct hocsinh{
	char ten[100];
	double diem;
};
typedef struct hocsinh HS;
void nhap(HS*x){
	getchar();
	gets(x->ten);
	scanf("%lf",&x->diem);
}
void in(HS a){
	printf("%s %.2lf\n",a.ten,a.diem);
}
int main(){
	HS a[1000];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		nhap(&a[i]);
	}
	for(int i=0;i<n;i++){
		in(a[i]);
	}
	return 0;
	
}
