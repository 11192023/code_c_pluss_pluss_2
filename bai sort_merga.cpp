#include<iostream>

int main() {
    int n, m;
    std::cin >> n >> m;
    int a[100];
    int b[100];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    int i = 0;
    int j = 0;
    int cnt = 0;
    int c[n + m];
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            c[cnt++] = a[i];
            ++i;
        } else {
            c[cnt++] = b[j];
            ++j;
        }
    }
    while (i < n) {
        c[cnt++] = a[i++];
    }
    while (j < m) {
        c[cnt++] = b[j++];
    }
    for (int i = 0; i < n + m; i++) {
        std::cout << c[i] << " ";
    }
    return 0;
}

