#include <iostream>
using namespace std;

int pascal(int k, int n) {
    if (k == 0 || k == n) {
        return 1;
    }
    return pascal(k - 1, n - 1) + pascal(k, n - 1);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++) {
            cout << pascal(j, i) << " ";
        }
        cout << endl;
    }
    return 0;
}

