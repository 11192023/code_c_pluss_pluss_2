#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int giatriA = 65;
    for (int i = giatriA; i < giatriA + n; i++)
    {
        for (int j = i; j < i + n; j++)
        {
            if (i % 2 == 1)
                cout << (char)j;
            else
                cout << (char)(j + 32);
        }
        cout << endl;
    }
}

