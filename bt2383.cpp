#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	if((c>=65&&c<=90)||(c>=97&&c<=122)){ 
		if(c=='z'|| c=='Z'){
			cout<< "a\n";
		} else {
		if(c>=65 && c<=90){
			c+=32;
			
		}++c;
		cout <<c<<endl;
	}
	}else {
		cout<<"INVALID\n";
	}return 0;
}
