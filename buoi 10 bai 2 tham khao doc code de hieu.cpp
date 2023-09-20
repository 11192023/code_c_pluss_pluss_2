#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// H�m t�nh t?ng ch? s? c?a s? nguy�n x
int sumOfDigits(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// H�m so s�nh theo gi� tr? tuy?t d?i tang d?n
bool cmp1(int a, int b) {
    return abs(a) < abs(b);
}

// H�m so s�nh theo gi� tr? tuy?t d?i tang d?n, n?u b?ng nhau th� s? duong d?ng tru?c
bool cmp2(int a, int b) {
    if (abs(a) != abs(b)) {
        return abs(a) < abs(b);
    } else {
        return a > b;
    }
}

// H�m so s�nh theo t?ng ch? s? tang d?n, n?u b?ng nhau th� s? nh? hon d?ng tru?c
bool cmp3(int a, int b) {
    if (sumOfDigits(a) != sumOfDigits(b)) {
        return sumOfDigits(a) < sumOfDigits(b);
    } else {
        return a < b;
    }
}

// H�m so s�nh sao cho s? ch?n d?ng tru?c, n?u c? hai s? d?u ch?n ho?c l? th� so s�nh gi� tr? tang d?n
bool cmp4(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b;
    } else if (a % 2 == 1 && b % 2 == 1) {
        return a < b;
    } else {
        return a % 2 == 0;
    }
}

// H�m so s�nh sao cho s? ch?n d?ng tru?c theo th? t? gi?m d?n, s? l? d?ng sau theo th? t? tang d?n
bool cmp5(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b;
    } else if (a % 2 == 1 && b % 2 == 1) {
        return a < b;
    } else {
        return a % 2 == 0;
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // S?p x?p theo gi� tr? tuy?t d?i tang d?n
    sort(a.begin(), a.end(), cmp1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // S?p x?p theo gi� tr? tuy?t d?i tang d?n, n?u b?ng nhau th�







#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// T�nh t?ng ch? s? c?a m?t s? nguy�n
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// H�m so s�nh gi� tr? tuy?t d?i c?a hai s? nguy�n
bool absoluteCompare(int a, int b) {
    return abs(a) < abs(b);
}

// H�m so s�nh t?ng ch? s? c?a hai s? nguy�n
bool digitSumCompare(int a, int b) {
    int digitSumA = digitSum(a);
    int digitSumB = digitSum(b);
    if (digitSumA == digitSumB) {
        return a < b;
    }
    return digitSumA < digitSumB;
}

// H�m so s�nh s? ch?n v� s? l? theo y�u c?u c?a d? b�i
bool evenOddCompare(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) {
        return true;
    }
    if (a % 2 != 0 && b % 2 == 0) {
        return false;
    }
    return a < b;
}

// H�m so s�nh s? ch?n gi?m d?n v� s? l? tang d?n theo y�u c?u c?a d? b�i
bool evenOddCompare2(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b;
    }
    if (a % 2 != 0 && b % 2 != 0) {
        return a < b;
    }
    if (a % 2 == 0 && b % 2 != 0) {
        return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // S?p x?p theo gi� tr? tuy?t d?i tang d?n
    sort(arr, arr + n, absoluteCompare);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // S?p x?p theo gi� tr? tuy?t d?i tang d?n, s? duong du?c x?p sau
    sort(arr, arr + n, [](int a, int b) {
        if (abs(a) != abs(b)) {
            return abs(a) < abs(b);
        }
        return a < b;
    });
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // S?p x?p theo t?ng ch? s? tang d?n
    sort(arr, arr + n, digitSumCompare);
    for (int i = 0; i < n;

