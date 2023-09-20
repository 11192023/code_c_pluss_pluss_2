#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int  sumdigit=0;
	string current;
	for(char c:str){
		if(isdigit(c)){
			current +=c;
		}
		else{
			if(!current.empty()){
			sumdigit+=stoi(current);
			current.clear();
		    }
		}
	}
	if(!current.empty()){
		sumdigit+=stoi(current);
		current.clear();
	}
	cout<<sumdigit<<endl;
	return 0;
}