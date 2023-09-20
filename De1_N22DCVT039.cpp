#include <iostream>

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
    const int MAX = 1000;  // Assuming a maximum value for the elements in the array
    
    // Count the frequencies of the numbers in the array
    int frequency[MAX] = {0};
    for (int i = 0; i < m; i++) {
        frequency[b[i]]++;
    }
    
    // Sort the numbers based on their frequency using bubble sort
    bubbleSort(b, frequency, m);
    
    // Print the numbers based on their frequency
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        if (frequency[b[i]] > 0) {
            std::cout << b[i] << " ";
            frequency[b[i]] = 0;  // Set the frequency to 0 to avoid duplicate printing
            cnt++;
        }
    }
    
    // Print the quantity of elements printed
    std::cout << std::endl << "Quantity of elements printed: " << cnt << std::endl;
}

int main() {
    unsigned n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int a[100];
    std::cout << "Enter the elements: ";
    for (unsigned i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    int b[n];
    unsigned m = 0;
    f1(a, n, b, m);
    sortByFrequency(b, m);
    
    return 0;
}
