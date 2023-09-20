#include<iostream>;
#include<cmath>
using namespace std;
bool   is_prime(int n){
	if(n<2){
		return false;
	}for(int i=2; i<sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}return true;
}
int main (){
	long long n;
	cin>>n;
	if(is_prime(n)){
		cout<<"YES";
	}else {
		cout<<"NO";
	}
	return 0;
}
