#include<iostream>
#include<string>
using namespace std;
string demicalbinary(long long n){
	if(n==0){
		return "";
	}else if(n==1){
		return "1";
	}else{
		string result = demicalbinary(n/2);
		 result += to_string(n%2);
		 return result;
	}
}
int main(){
	long long demical;
	cin>>demical;
	string binary =demicalbinary(demical);
	cout<<binary<<endl;
	return 0;
}
