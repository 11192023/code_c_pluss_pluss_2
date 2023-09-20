#include <iostream>
#include <map>
#include <sstream>
using namespace std;

void bubble_sort(string word[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (word[j] > word[j + 1]) {
                string tmp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = tmp;
            }
        }
    }
}

int main() {
    cout << "Enter the number of elements for the string: " << endl;
    int count;
    cin >> count;
    cin.ignore();  // Ignore the newline character after reading the count

    const int max = 100;
    string word[max];

    cout << "Enter the elements for the string: " << endl;
    for (int i = 0; i < count; i++) {
        getline(cin, word[i]);
    }

    string word2[max];
    for (int i = 0; i < count; i++) {
        word2[i] = word[i];
    }

    bubble_sort(word, count);

    map<char, int> mp;
    for (int i = 0; i < count; i++) {
        for (char ch : word[i]) {
            mp[ch]++;
        }
    }

    for (int i = 0; i < count; i++) {
        if (mp[word[i][0]] > 0) {
            cout << word[i] << " " << mp[word[i][0]] << endl;
            mp[word[i][0]] = 0;
        }
    }

    cout << endl;

    map<char, int> frequency;
    for (int i = 0; i < count; i++) {
        for (char ch : word2[i]) {
            frequency[ch]++;
        }
    }

    for (int i = 0; i < count; i++) {
        if (frequency[word2[i][0]] > 0) {
            cout << word2[i] << " " << frequency[word2[i][0]] << endl;
            frequency[word2[i][0]] = 0;
        }
    }

    return 0;
}
