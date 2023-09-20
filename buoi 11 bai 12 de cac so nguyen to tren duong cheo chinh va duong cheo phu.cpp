#include<iostream>
#include<cmath>
using namespace std;
bool nt(long long n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main(){
	long long n;
	cin>>n;
	long long a[200][200];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int cnt =0;
	for(int i=0;i<n;i++){
		if(nt(a[i][i]))
		{
			cnt++;
		}
		if(nt(a[i][n-i-1])){
			cnt++;
		}
	}
	if(n%2==1&&nt(a[n/2][n/2])){
		cnt--;
	}
	cout<<cnt;
	return 0;
}
