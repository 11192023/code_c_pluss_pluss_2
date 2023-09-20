#include <iostream>
#include <cmath>

using namespace std;

const long long MAX = 1000000;
long long prime[MAX + 1];

void sieve() {
    for(int i = 0; i <= MAX; i++)
        prime[i] = 1;
    prime[1] = prime[0] = 0;

    for(int i = 2; i <= sqrt(MAX); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= MAX; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sieve();
    long long n;
    cin >> n;

    int* res = new int[MAX];
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i]) {
            long long p = i * i;
            while(p <= n) {
                res[count++] = p;
                p *= i;
            }
        }
    }

    for(int i = 0; i < count; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    delete[] res;
    return 0;
}

