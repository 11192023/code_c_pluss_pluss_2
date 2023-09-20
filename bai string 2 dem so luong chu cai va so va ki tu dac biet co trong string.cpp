#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int alpha=0;
	int digit=0;
	int charac=0;
	for(char c:str){
		if(isalpha(c)){
			alpha++;
		}
		else if(isdigit(c)){
			digit++;
		}
		else{
			charac++;
		}
	}
	cout<<alpha<<" "<<digit<<" "<<charac<<endl;
	return 0;
}