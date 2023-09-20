#include <iostream>
#include <cmath>
using namespace std;
int snt(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}
void InMang(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}
int DemSoLuongSNT(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; ++i)
    {
        if (snt(a[i]))
            ++dem;
    }
    return dem;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    NhapMang(a, n);
    InMang(a, n);
    int dem = DemSoLuongSNT(a, n);
    if (dem != 0)
        cout << dem;
    else
        cout << "NONE";
    return 0;
}
