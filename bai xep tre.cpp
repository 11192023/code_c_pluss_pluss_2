#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    // S?p x?p danh s�ch tr?ng lu?ng c�c tr? em theo th? t? tang d?n
    sort(weights.begin(), weights.end());

    // S? d?ng hai bi?n con tr?: m?t bi?n con tr? d?n tr? em c� tr?ng lu?ng nh? nh?t v� m?t bi?n con tr? d?n tr? em c� tr?ng lu?ng l?n nh?t
    int left = 0;
    int right = n - 1;

    // S? d?ng m?t bi?n d?m d? d?m s? lu?ng thuy?n gondola c?n thi?t
    int count = 0;

    while (left <= right) {
        // N?u tr?ng lu?ng c?a tr? em nh? nh?t c?ng v?i tr?ng lu?ng c?a tr? em l?n nh?t kh�ng vu?t qu� x th� ta c� th? d?t hai d?a tr? n�y v�o m?t chi?c thuy?n gondola
        if (weights[left] + weights[right] <= x) {
            count++;
            left++;
            right--;
        }
        // N?u tr?ng lu?ng c?a tr? em nh? nh?t c?ng v?i tr?ng lu?ng c?a tr? em l?n nh?t vu?t qu� x th� ta ch? c� th? d?t tr? em l?n nh?t v�o m?t chi?c thuy?n gondola
        else {
            count++;
            right--;
        }
    }

    cout << count << endl;

    return 0;
}

