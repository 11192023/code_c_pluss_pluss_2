#include <iostream>
#include <cmath>
using namespace std;

// Ki?m tra s? nguy�n duong n c� ph?i l� s? nguy�n t? kh�ng
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int maxLastDigit = -1; // Ch? s? cu?i c�ng l?n nh?t
    int cnt = 0; // S? lu?ng s? th?a m�n
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            int lastDigit = i % 10; // L?y ch? s? cu?i c�ng c?a i
            if (lastDigit > maxLastDigit) {
                maxLastDigit = lastDigit;
                cnt = 1; // �?t l?i s? lu?ng s? th?a m�n n?u c� ch? s? cu?i c�ng m?i l?n hon
                cout << i << " ";
            } else if (lastDigit == maxLastDigit) {
                cnt++;
                cout << i << " ";
            }
        }
    }
    cout << endl << cnt << endl;
    return 0;
}

