#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    for (int k = 1; k <= n; k++) {
        long long f = ((long long) k * k * (k * k - 1) / 2) - 4 * (k - 1) * (k - 2);
        cout << f << endl;
    }

    return 0;
}

