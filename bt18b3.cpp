#include<iostream>
using namespace std;
int main(){
	int n;
	cin >>n;
	if(n%2==0){
		cout<< "la so chan";
	}return 0;
	
	for (int i= 1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if(j==i||j==n-i+1){
				cout<<i<<endl;
			}else{cout<<" ";
			}
		}cout<<endl;
	}return 0;
}
