#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
const int mod=(int)1000000007;
int main() {
  int n;
    cin>>n;
    int a[n];
    long long res=1;
    for(int i=0;i<n;i++){
cin>>a[i];}
    for(int i=0;i<n;i++){
     res*=a[i];
        res%=mod;
    }
      cout<<res%mod;
    return 0;
}

