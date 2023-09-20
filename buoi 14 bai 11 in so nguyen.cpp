#include<iostream>
using namespace std;
void lefttoright(long long n){
	if(n<10){
		cout<<n<<" ";
		return ;
	}
	lefttoright(n/10);
	cout<<n%10<<" ";
}

void righttoleft(long long n){
	if(n<10){
		cout<<n<<" ";
		return ;
	}
	cout<<n%10<<" ";
	righttoleft(n/10);
}
int main(){
	long long n;
	cin>>n;
	lefttoright(n);
	cout<<endl;
	righttoleft(n);
	return 0;
}
