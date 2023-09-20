#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 1) {
                cout << c;
                c++;
            } else {
                if (j % 2 == 1) {
                    cout << " ";
                } else {
                    cout << c;
                    c++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

