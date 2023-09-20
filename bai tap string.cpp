#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	
	int cnt=0;
	char c;
	cin>>c;
	for(int i=0;i<s.length();i++){
		if(s[i]==c){
			cout<<"vi tri xuat hien "<<i+1<<endl;
			cnt++;
		}
	}
		cout<<"so lan chu c xuat hien "<<cnt<<endl;
	int count=0;
	for(int i=0;i<s.length();i++){
		if(isupper(s[i])==true){
			count++;
		}
	}
	cout<<"so lan ki tu viet hoa"<<count<<endl;
	return 0;
}
