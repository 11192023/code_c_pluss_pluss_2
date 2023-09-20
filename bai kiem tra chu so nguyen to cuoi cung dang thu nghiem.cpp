#include <iostream>
#include <cmath>
using namespace std;

// Ki?m tra s? nguyên duong n có ph?i là s? nguyên t? không
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

    int maxLastDigit = -1; // Ch? s? cu?i cùng l?n nh?t
    int cnt = 0; // S? lu?ng s? th?a mãn
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            int lastDigit = i % 10; // L?y ch? s? cu?i cùng c?a i
            if (lastDigit > maxLastDigit) {
                maxLastDigit = lastDigit;
                cnt = 1; // Ð?t l?i s? lu?ng s? th?a mãn n?u có ch? s? cu?i cùng m?i l?n hon
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

