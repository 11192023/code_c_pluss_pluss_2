#include<iostream>
#include<set>
using namespace std;
int main(){
	string s;
	cin>>s;
	set<char>a;
	for(char x:s){
		a.insert(x);
	} 
	if(a.size()==26){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}
