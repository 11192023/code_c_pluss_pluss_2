#include <iostream>
#include <cmath>
using namespace std;

bool CheckPrime(int n)
{
    if (n < 2)
        return false;
    int x = sqrt(n);
    for (int i = 2; i <= x; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int TongCS(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}
bool CheckFibbonacci(int n)
{
    if (n == 1 || n == 0)
        return true;
    int a = 0;
    int b = 1;
    int c = a + b;
    while (c <= n)
    {
        if (c == n)
            return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        if (CheckFibbonacci(TongCS(i)) && CheckPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
