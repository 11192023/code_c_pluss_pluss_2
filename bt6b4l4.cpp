#include <iostream>
using namespace std;
long long _gcd(long long a, long long b){
    if (b == 0){
        return a;
    }
    long long r = a % b;
    return _gcd(b, r);
}
long long lcm (long long a,long long b){
    return a*b/_gcd(a,b);
}
int main(){
    long long a,b;
    cin >>a>>b;
    cout<<_gcd(a,b)<<" "<<lcm(a,b);
    return 0;
}

