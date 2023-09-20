#include<iostream>
#include<string>
using namespace std;

string decimalToBinary(long long n) {
    if (n == 0) {
        return "";
    } else if (n == 1) {
        return "1";
    } else {
        string result = decimalToBinary(n / 2);
        result += to_string(n % 2);
        return result;
    }
}

int main() {
    long long decimal;
    cin >> decimal;
    string binary = decimalToBinary(decimal);
    cout << binary << endl;
    return 0;
}

