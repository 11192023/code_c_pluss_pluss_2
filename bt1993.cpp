#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Ki?m tra N c� ph?i l� s? ch?n
    if (N % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� v?a chia h?t cho 3 v� 5
    if (N % 3 == 0 && N % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� chia h?t cho 3 nhung kh�ng chia h?t cho 7
    if (N % 3 == 0 && N % 7 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� chia h?t cho 3 ho?c 7
    if (N % 3 == 0 || N % 7 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� l?n hon 30 v� nh? hon 50
    if (30 < N && N < 50) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� chia h?t cho �t nh?t m?t trong 3 s? 2, 3, 5 v� kh�ng nh? hon 30
    if (N >= 30 && (N % 2 == 0 || N % 3 == 0 || N % 5 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� 2 ch? s? c� ch? s? t?n c�ng l� s? nguy�n t?
    if (10 <= N && N < 100 && (N % 10 == 2 || N % 10 == 3 || N % 10 == 5 || N % 10 == 7)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� kh�ng vu?t qu� 100 v� chia h?t cho 23
    if (N <= 100 && N % 23 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N kh�ng thu?c do?n [10, 20]
    if (N < 10 || N > 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N c� ch? s? t?n c�ng l� b?i s? c?a 3
    if (N % 10 == 0 || N % 10 == 3 || N % 10 == 6 || N % 10 == 9) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

