#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n), result(n, -1); // Kh?i t?o m?ng a v� result v?i gi� tr? ban d?u l� -1

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        int min_greater = -1; // Kh?i t?o gi� tr? nh? nh?t l?n hon a[i]
        for (int j = 0; j < n; j++) {
            if (a[j] > a[i] && (min_greater == -1 || a[j] < a[min_greater])) {
                min_greater = j;
            }
        }
        if (min_greater != -1) {
            result[i] = a[min_greater];
        } else {
            result[i] = -1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (result[i] != -1) {
            cout << result[i] << " ";
        } else {
            cout << "_ ";
        }
    }

    return 0;
}

