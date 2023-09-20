#include <iostream>
#include <sstream>
#include <string>
#include <map>

using namespace std;

void lower(string& s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main() {
    string s;
    getline(cin, s);
    lower(s);
    stringstream ss(s);
    string token;
    const int max = 1000;
    string a[max];
    int size = 0;
    while (ss >> token && size < max) {
        a[size] = token;
        size++;
    }
    map<string, int> mp;
    for (int i = 0; i < size; i++) {
        mp[a[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (mp[a[i]] > 0) {
            cout << mp[a[i]] << " " << a[i] << endl;
            mp[a[i]] = 0;
        }
    }
    return 0;
}
