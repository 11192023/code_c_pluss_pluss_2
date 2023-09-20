#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

struct sinhvien{
    char ma[100];
    char ten[100];
    float diem;
};
typedef struct sinhvien sv;
void nhap(sv*x){
    scanf("%s",x->ma);
    fflush(stdin);
    gets(x->ten);
    scanf("%f",&x->diem);
}
void in(sv a){
    printf("%s %s %.2lf\n",a.ma,a.ten,a.diem);
}
int timkiem1 (sv a[],int n,char s[100]){
    for(int i=0;i<n;i++){
        if(strcmp(s,a[i].ma)==0){
            in(a[i]);
            return 1;
        }
    }
    printf("khong tim thay sinh vien co ma nhu vay vui long nhap lai.");
}
int main(){
    int n;
    scanf("%d",&n);
    while (getchar() != '\n'); // Xóa b? d?m d?u vào
    sv a[n];
    for(int i=0;i<n;i++)nhap(&a[i]);
    for(int i=0;i<n;i++)in(a[i]);
    char s[100];
    printf("nhap ma sinh vien cua hoc sinh: ");
    scanf("%s",s);
    timkiem1(a,n,s);
    return 0;
    
}

