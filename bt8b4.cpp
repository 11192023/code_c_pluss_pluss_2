#include <iostream>
using namespace std;

void primeFactors(long long n) {
    for (int i = 2; i <= n / i; i++) {
        while (n % i == 0) {
            cout << i << "^";
            n /= i;
        }
    }
    if (n > 1) cout << n << "^1";
}

int main() {
    long long n;
    cin >> n;
    primeFactors(n);
    return 0;
}

