#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Hàm tính t?ng ch? s? c?a s? nguyên x
int sumOfDigits(int x) {
    int sum = 0;
    while (x) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

// Hàm so sánh theo giá tr? tuy?t d?i tang d?n
bool cmp1(int a, int b) {
    return abs(a) < abs(b);
}

// Hàm so sánh theo giá tr? tuy?t d?i tang d?n, n?u b?ng nhau thì s? duong d?ng tru?c
bool cmp2(int a, int b) {
    if (abs(a) != abs(b)) {
        return abs(a) < abs(b);
    } else {
        return a > b;
    }
}

// Hàm so sánh theo t?ng ch? s? tang d?n, n?u b?ng nhau thì s? nh? hon d?ng tru?c
bool cmp3(int a, int b) {
    if (sumOfDigits(a) != sumOfDigits(b)) {
        return sumOfDigits(a) < sumOfDigits(b);
    } else {
        return a < b;
    }
}

// Hàm so sánh sao cho s? ch?n d?ng tru?c, n?u c? hai s? d?u ch?n ho?c l? thì so sánh giá tr? tang d?n
bool cmp4(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a > b;
    } else if (a % 2 == 1 && b % 2 == 1) {
        return a < b;
    } else {
        return a % 2 == 0;
    }
}

// Hàm so sánh sao cho s? ch?n d?ng tru?c theo th? t? gi?m d?n, s? l? d?ng sau theo th? t? tang d?n
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

    // S?p x?p theo giá tr? tuy?t d?i tang d?n
    sort(a.begin(), a.end(), cmp1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // S?p x?p theo giá tr? tuy?t d?i tang d?n, n?u b?ng nhau thì







#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// Tính t?ng ch? s? c?a m?t s? nguyên
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Hàm so sánh giá tr? tuy?t d?i c?a hai s? nguyên
bool absoluteCompare(int a, int b) {
    return abs(a) < abs(b);
}

// Hàm so sánh t?ng ch? s? c?a hai s? nguyên
bool digitSumCompare(int a, int b) {
    int digitSumA = digitSum(a);
    int digitSumB = digitSum(b);
    if (digitSumA == digitSumB) {
        return a < b;
    }
    return digitSumA < digitSumB;
}

// Hàm so sánh s? ch?n và s? l? theo yêu c?u c?a d? bài
bool evenOddCompare(int a, int b) {
    if (a % 2 == 0 && b % 2 != 0) {
        return true;
    }
    if (a % 2 != 0 && b % 2 == 0) {
        return false;
    }
    return a < b;
}

// Hàm so sánh s? ch?n gi?m d?n và s? l? tang d?n theo yêu c?u c?a d? bài
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

    // S?p x?p theo giá tr? tuy?t d?i tang d?n
    sort(arr, arr + n, absoluteCompare);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // S?p x?p theo giá tr? tuy?t d?i tang d?n, s? duong du?c x?p sau
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

