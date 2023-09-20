#include<iostream>
#include<string>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int sum_even=0;
	int sum_odd=0;
	string str = to_string(n);
	for(int i= 0;i<str.length();i++)
	{
		int num = str[i]-'0';
		if(num%2==0){
			sum_even+=num;
		}else{sum_odd+=num;
		}
	}cout <<sum_even<<" "<<sum_odd;
	return 0;
}
