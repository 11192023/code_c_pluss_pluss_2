#include<iostream>
#include<cmath>
using namespace std;

bool ktnt(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}

int check(int n){
    int cuoi = n % 10;
    n /= 10;
    while(n > 0){
        int dau = n % 10;
        if(dau > cuoi) return 0;
        n /= 10;
    }
    return 1;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        if(check(i) && ktnt(i)){
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl << cnt;
    return 0;
}

