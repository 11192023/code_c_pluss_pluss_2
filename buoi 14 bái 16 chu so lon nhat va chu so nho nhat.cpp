#include<iostream>
using namespace std;
void find(long long n,long long &min_digit ,long long &max_digit){
	if(n==0)return;
	long long digit=n%10;
	if(digit<min_digit){
		min_digit=digit;
	}
	if(digit>max_digit){
		max_digit=digit;
	}
	find(n/10,min_digit,max_digit);
}
int main(){
	long long n;
	cin>>n;
	long long min_digit=9;
	long long max_digit=0;
	find(n,min_digit,max_digit);
	cout<<max_digit<<" "<<min_digit<<endl;
	return 0;
	
}
