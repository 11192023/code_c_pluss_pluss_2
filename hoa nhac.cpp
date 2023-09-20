#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
int n, m;
cin >> n >> m;
vector<int> h(n), t(m);
for (int i = 0; i < n; i++) {
cin >> h[i];
}
sort(h.begin(), h.end());
for (int i = 0; i < m; i++) {
cin >> t[i];
auto it = upper_bound(h.begin(), h.end(), t[i]);
if (it == h.begin()) {
cout << "-1\n";
} else {
it--;
cout << *it << "\n";
h.erase(it);
}
}
return 0;
}
