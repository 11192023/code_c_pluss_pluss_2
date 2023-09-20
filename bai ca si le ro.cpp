#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Song {
    int start, end;
};

bool cmp(const Song &a, const Song &b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;

    vector<Song> songs(n);
    for (int i = 0; i < n; i++) {
        cin >> songs[i].start >> songs[i].end;
    }

    sort(songs.begin(), songs.end(), cmp);

    int count = 1;
    int lastEnd = songs[0].end;
    for (int i = 1; i < n; i++) {
        if (songs[i].start > lastEnd) {
            count++;
            lastEnd = songs[i].end;
        }
    }

    cout << count << endl;

    return 0;
}

