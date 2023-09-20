#include<bits/stdc++.h>
using namespace std;
double a,b;
int main(){
	cin>>a>>b;
	long long x=a;
	long long y=b;
	if(a>x){
		cout<<y-x;
		return 0;
	}
	else cout<<y-x+1;
    return 0 ;
}
