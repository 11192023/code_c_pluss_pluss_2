#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==n||j==1||j==n ||(i >= 2 && i <= 4 && j >= 2 && j <= 4)){
				cout<<"*";
			}else {cout<<"#";
			}
		}cout<<endl;
	}cout<<endl;
}
