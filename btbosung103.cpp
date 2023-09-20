#include <iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(c>=65&&c<=90){
		cout<<"UPPER";
	}else if (c>=97&&c<=122){
		cout<<"LOWER";
	}else if(c>=47&&c<=58){
		cout<<"DIGIT";
	}else{
		cout<<"SPECIAL";
	}return 0;
}
