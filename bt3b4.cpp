#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isAllDigitsPrime(int n) {
    while (n) {
        int r = n % 10;
        if (r != 2 && r != 3 && r != 5 && r != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool isPurePrime(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return isPrime(sum);
}

int countPurePrimes(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isAllDigitsPrime(i) && isPrime(i) && isPurePrime(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;
    int cnt = countPurePrimes(a, b);
    cout << cnt << endl;
    return 0;
}

