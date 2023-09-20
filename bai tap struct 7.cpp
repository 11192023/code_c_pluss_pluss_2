#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct hocsinh {
    char ten[50];
    double diem;
};

typedef struct hocsinh HS;

HS nhap() {
    HS x;
    printf("Nhap ten hoc sinh: ");
    fgets(x.ten, sizeof(x.ten), stdin);
    printf("Nhap diem: ");
    scanf("%lf", &x.diem);
    return x;
}

void in(HS a) {
    printf("Ten: %s\n", a.ten);
    printf("Diem: %.2lf\n", a.diem);
}

int main () {
    HS a=nhap();
    in(a);
}


