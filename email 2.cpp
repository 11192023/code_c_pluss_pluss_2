#include<iostream>
#include<map>
#include<sstream>
using  namespace std;
int  main(){
	int t;
	cin>>t;
	map<string,int>frequency;
	cin.ignore();
	while(t--){
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
	stringstream ss(s);
	string token ;
	const int max=100;
	int count =0;
	string res="";
	string word[max];
	while(ss>>token&&count<max){
		word[count]=token;
		count++;
	}
	res+=word[count-1];
	for(int i=0;i<count-1;i++){
		res+=word[i][0];
	}
	frequency[res];
	if(frequency[res]>0){
		cout<<res<<frequency[res]+1<<"@gmail.com"<<endl;
	}
	else{
		cout<<res<<"@gmail.com"<<endl;
	}
	frequency[res]++;
}
    return 0;
}