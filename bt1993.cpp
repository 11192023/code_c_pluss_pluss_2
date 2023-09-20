#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Ki?m tra N có ph?i là s? ch?n
    if (N % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có v?a chia h?t cho 3 và 5
    if (N % 3 == 0 && N % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có chia h?t cho 3 nhung không chia h?t cho 7
    if (N % 3 == 0 && N % 7 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có chia h?t cho 3 ho?c 7
    if (N % 3 == 0 || N % 7 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có l?n hon 30 và nh? hon 50
    if (30 < N && N < 50) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có chia h?t cho ít nh?t m?t trong 3 s? 2, 3, 5 và không nh? hon 30
    if (N >= 30 && (N % 2 == 0 || N % 3 == 0 || N % 5 == 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có 2 ch? s? có ch? s? t?n cùng là s? nguyên t?
    if (10 <= N && N < 100 && (N % 10 == 2 || N % 10 == 3 || N % 10 == 5 || N % 10 == 7)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có không vu?t quá 100 và chia h?t cho 23
    if (N <= 100 && N % 23 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N không thu?c do?n [10, 20]
    if (N < 10 || N > 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Ki?m tra N có ch? s? t?n cùng là b?i s? c?a 3
    if (N % 10 == 0 || N % 10 == 3 || N % 10 == 6 || N % 10 == 9) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

