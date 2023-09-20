#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
	if(n<2)return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}
int main(){
	int n,m;
	cin>>n>>m;
	int  a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(isprime(a[i][j])){
				cout<<a[i][j]<<" ";
}
}
cout<<endl;
}
return 0;
}

