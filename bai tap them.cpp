#include <iostream>
#include <map>
using namespace std;

pair<int, int> find_most_freq(int arr[], int n) {
    map<int, int> freq;
    int max_freq = 0, max_elem = 0;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > max_freq || (freq[arr[i]] == max_freq && arr[i] > max_elem)) {
            max_freq = freq[arr[i]];
            max_elem = arr[i];
        }
    }
    return {max_elem, max_freq};
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    pair<int, int> result = find_most_freq(arr, n);
    cout << result.first << endl;
    cout << result.second << endl;
    return 0;
}
