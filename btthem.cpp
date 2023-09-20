#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        // in ra kho?ng tr?ng ? d?u m?i dòng
        for (int j = 1; j <= N - i; j++) {
            cout << " ";
        }

       

        // xu?ng dòng d? in dòng ti?p theo
        cout << endl;
    }

    return 0;
}

