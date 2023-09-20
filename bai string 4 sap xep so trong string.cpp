#include<iostream>
#include<string>
using namespace std;
void sortstring (string & str){
	for(int i=0;i<str.length();i++){
		for(int j=0;j<str.length()-i-1;j++){
			if(str[j]<str[j+1]){
				char tmp= str[j];
				str[j]=str[j+1];
				str[j+1]=tmp;
			}
		}
	}
}
int main(){
	string str;
	cin>>str;
	sortstring(str);
	size_t zero =0;
	if(str[zero]=='0'){
		zero++;
	}
	str.erase(0,zero);
	cout<<str;
	return 0;
}