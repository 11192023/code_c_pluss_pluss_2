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

int  check(int n){
	
	if(n<10)return 1;
    int cuoi = n % 10;
    n /= 10;
    while(n > 0){
        
        if(n%10 > cuoi) return 0;
        n /= 10;
    
}
    return 1;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    if(n>=2){
    	cout<<"2"<<" ";
    	cnt++;
	}
    for(int i=3; i<=n; i+=2){
    	
		
        if(check(i) && ktnt(i)){
            cout << i << " ";
            cnt++;
        
        }
    }
    cout << endl << cnt;
    return 0;
}

