#include<bits/stdc++.h>
using namespace std;
string viethoa(string &str){
	for(char &x:str){
		x=toupper(x);
	}
	return str;
}
int sosanhkytu(char a[],char b[]){
	if(strlen(a)>strlen(b)){
		return 1;
	}
	if(strlen(b)>strlen(a)){
		return -1;
	}
	for(int i=0;a[i]!='\0';i++){
		if(a[i]!=b[i]){
			return 2;
		}
	}
	return 0;
}
int main(){
	char str1[30]="nguyen hie";
	char str2[30]="nguyen hie";
	cout<<sosanhkytu(str1,str2);
	return 0;
}