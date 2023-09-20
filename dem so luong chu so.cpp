#include <iostream>
#include<string>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long count =0;
	string str = to_string(n);
	for(int i=0;i<str.length();i++){
		if(str[i]>='0'&&str[i]<='9'){
			count++;
		}
	}cout << count;
	return 0;
	
}
