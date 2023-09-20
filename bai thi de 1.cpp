#include <iostream>
using namespace std;
bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void f1(int a[], unsigned n, int b[], unsigned& m) {
    for (unsigned i = 0; i < n; i++) {
        if (isprime(a[i])) {
            b[m] = a[i];
            m++;
        }
    }
}

void bubbleSort(int b[], int frequency[], unsigned m) {
    for (unsigned i = 0; i < m - 1; i++) {
        for (unsigned j = 0; j < m - i - 1; j++) {
            if (frequency[b[j]] > frequency[b[j + 1]]) {
                int tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
}

void sortByFrequency(int b[], int m) {
    const int MAX = 1000;  
    

    int frequency[MAX] = {0};
    for (int i = 0; i < m; i++) {
        frequency[b[i]]++;
    }
    
    bubbleSort(b, frequency, m);
    
    for (int i = 0; i < m; i++) {
        if (frequency[b[i]] > 0) {
            std::cout << b[i] << " ";
            frequency[b[i]] = 0;  
        }
    }
}

int main() {
    unsigned n;
    std::cin >> n;
    int a[100];
    for (unsigned i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int b[n];
    unsigned m = 0;
    f1(a, n, b, m);
    sortByFrequency(b, m);
    
    return 0;
}
