#include <stdio.h>
#include <string.h>

struct hocsinh {
    char ten[50];
    double diem;
};

typedef struct hocsinh HS;

HS nhap() {
    HS x;
    printf("Nhap ten hoc sinh: ");
    fgets(x.ten, sizeof(x.ten), stdin);
    x.ten[strcspn(x.ten, "\n")] = '\0'; // x�a k� t? newline
    printf("Nhap diem: ");
    scanf(" %lf", &x.diem); // th�m kho?ng tr?ng tru?c %lf
    return x;
}

void in(HS a) {
    printf("Ten: %s\n", a.ten);
    printf("Diem: %.2lf\n", a.diem);
}

int main () {
    HS a=nhap();
    in(a);
    return 0;
}

