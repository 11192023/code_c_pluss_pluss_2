#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void qsort(int a[], int l, int r, vector<pair<int,int>> &res) {
    if (l >= r) return;

    int mid = (l + r) / 2;
    int pivot = a[mid];
    int i = l, j = r;

    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) {
            if (i != j) res.push_back({i+1,j+1});
            swap(a[i], a[j]);
            i++; j--;
        }
    }

    if (l < j) qsort(a, l, j, res);
    if (i < r) qsort(a, i, r, res);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<pair<int,int>> res;
    qsort(a, 0, n-1, res);

    for (auto p : res) cout << p.first << " " << p.second << endl;

    return 0;
}

