#include<iostream>
#include<cmath>
using namespace std;
bool ktnt(int n){
	if(n<2){
	return false;}
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
	
}
void tongcapnguyento(int n){
	for (int p=2;p<=n/2;p++){
		int q=n-p;
	if(ktnt(p)&&ktnt(q)){
		cout<<p<<" "<<q<<endl;
	}
	}
}
int main(){
	int n;
	cin >>n;
	tongcapnguyento(n);
	return 0;
}
