
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int divisors[n];

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors[count] = i;
            count++;
        }
    }

    sort(divisors, divisors + count);

    for (int i = 0; i < count; i++) {
        cout << divisors[i] << " ";
    }

    cout << "\n" << count;

    return 0;
}

