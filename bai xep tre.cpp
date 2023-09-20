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

    // S?p x?p danh sách tr?ng lu?ng các tr? em theo th? t? tang d?n
    sort(weights.begin(), weights.end());

    // S? d?ng hai bi?n con tr?: m?t bi?n con tr? d?n tr? em có tr?ng lu?ng nh? nh?t và m?t bi?n con tr? d?n tr? em có tr?ng lu?ng l?n nh?t
    int left = 0;
    int right = n - 1;

    // S? d?ng m?t bi?n d?m d? d?m s? lu?ng thuy?n gondola c?n thi?t
    int count = 0;

    while (left <= right) {
        // N?u tr?ng lu?ng c?a tr? em nh? nh?t c?ng v?i tr?ng lu?ng c?a tr? em l?n nh?t không vu?t quá x thì ta có th? d?t hai d?a tr? này vào m?t chi?c thuy?n gondola
        if (weights[left] + weights[right] <= x) {
            count++;
            left++;
            right--;
        }
        // N?u tr?ng lu?ng c?a tr? em nh? nh?t c?ng v?i tr?ng lu?ng c?a tr? em l?n nh?t vu?t quá x thì ta ch? có th? d?t tr? em l?n nh?t vào m?t chi?c thuy?n gondola
        else {
            count++;
            right--;
        }
    }

    cout << count << endl;

    return 0;
}

