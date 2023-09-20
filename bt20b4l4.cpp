#include <iostream>
#include <cmath>
using namespace std;

const int MAX = 1000000;
int prime[MAX + 1];

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
        for(int i = 2; i <= n; i++) {
            if(prime[i] && i <= sqrt(n)
			) {
                cout << i * i << " ";
            }
        }
        cout << endl;
    
    return 0;
}

