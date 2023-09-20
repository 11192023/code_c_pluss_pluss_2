#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // i và j là hai u?c c?a n
            long long j = n / i;
            sum += i + j;
            // tr? di tru?ng h?p i = j d? không c?ng 2 l?n
            if (i == j) {
                sum -= i;
            }
        }
    }

    cout << sum;

    return 0;
}

