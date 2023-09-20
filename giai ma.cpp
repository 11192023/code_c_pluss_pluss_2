#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // b? qua ký t? '\n' sau khi nh?p T
    while (T--) {
        string s;
        getline(cin, s);
        string result = "";
        for (int i = 0; i < s.size(); i += 2) {
            char c = s[i];
            int count = s[i + 1] - '0';
            result += string(count, c);
        }
        cout << result << endl;
    }
    return 0;
}

