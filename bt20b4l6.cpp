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
    
    for(int p1 = 2; p1 * p1 * p1 <= n; p1++) {
        if(prime[p1]) {
            for(int p2 = p1 + 1; p1 * p1 * p2 <= n; p2++) {
                if(prime[p2]) {
                    cout << p1 * p1 * p2 << " ";
                }
            }
            cout << p1 * p1 * p1 << " ";
        }
    }
    
    cout << endl;
    return 0;
}

