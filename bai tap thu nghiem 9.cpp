#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_so_far = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max_so_far) {
            cout << a[i] << " ";
            max_so_far = a[i];
        }
    }

    return 0;
}

