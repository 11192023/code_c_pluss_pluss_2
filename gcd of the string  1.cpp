#include<iostream>
#include<algorithm>
using namespace std;

long long result(string b, long long a) {
    long long res = 0;
    for (char x : b) {
        res = res * 10 + (x - '0');
        res %= a;
    }
    return res;
}

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long a;
    string b;
    cin >> a >> b;
    long long result1 = result(b, a);
    cout << gcd(a, result1) << endl;
    return 0;
}

