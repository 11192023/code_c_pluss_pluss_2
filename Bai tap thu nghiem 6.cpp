#include<iostream>
using namespace std;

void nhap_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap gia tri a[" << i << "]: ";
        cin >> a[i];
    }
}

void xuat_mang(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

void chen_phan_tu(int a[], int &n, int vt, int x){
    if(vt < 0 || vt > n){ // ki?m tra v? tr� ch�n c� h?p l? kh�ng
        cout << "Vi tri chen khong hop le" << endl;
        return;
    }
    if(n == 100){ // ki?m tra m?ng d� d?y chua
        cout << "Mang da day" << endl;
        return;
    }
    for(int i = n - 1; i >= vt; i--){ // d?ch ph?n t? sang ph?i d? ch?a v? tr� ch�n
        a[i+1] = a[i];
    }
    a[vt] = x; // ch�n gi� tr? v�o m?ng
    n++; // tang k�ch thu?c m?ng
}

int main(){
    int a[100];
    int n, vt, x;

    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhap_mang(a, n);
    cout << "Mang ban dau: ";
    xuat_mang(a, n);

    cout << "Nhap gia tri can chen: ";
    cin >> x;
    cout << "Nhap vi tri can chen: ";
    cin >> vt;
    chen_phan_tu(a, n, vt, x);

    cout << "Mang sau khi chen: ";
    xuat_mang(a, n);

    return 0;
}

