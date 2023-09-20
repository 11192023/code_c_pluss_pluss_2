#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Chuy?n s? thành chu?i
    string str = to_string(n);

    // Kh?i t?o t?ng ch?n và t?ng l? b?ng 0
    int sum_even = 0;
    int sum_odd = 0;

    // Duy?t t?ng ký t? trong chu?i và tính t?ng ch?n và t?ng l?
    for (int i = 0; i < str.length(); i++) {
        int num = str[i] - '0';  // Chuy?n ký t? thành s? nguyên

        if (num % 2 == 0) {
            sum_even += num;
        } else {
            sum_odd += num;
        }
    }

    cout << sum_even << " " << sum_odd << endl;

    return 0;
}

