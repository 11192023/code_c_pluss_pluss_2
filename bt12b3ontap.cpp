#include<iostream>
using namespace std;
int main(){


long long n;
    int p;
    cin >> n >> p;
    long long tong = 0;
    for (long long i = p; i <= n; i *= p)
    {
        tong += n / i;
    }
    cout << tong << endl;
}
