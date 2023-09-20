#include<iostream>
#include<sstream>
#include<map>
#include<string>
using namespace std;
void bubble_sort(string &s){
	for(int i=0;i<s.length()-1;i++){
		for(int j=0;j<s.length()-i-1;j++){
			if(s[j]>s[j+1]){
				char tmp=s[j];
				s[j]=s[j+1];
				s[j+1]=tmp;
			}
		}
	}
}
int main(){
	string s;
	cin>>s;
	string ss=s;
	bubble_sort(s);
	map<char,int>frequency;
	for(int i=0;i<s.length();i++){
		frequency[s[i]]++;
	}
	for(int i=0;i<s.length();i++){
		if(frequency[s[i]]>0){
			cout<<s[i]<<" "<<frequency[s[i]]<<endl;
			frequency[s[i]]=0;
		}
	}
	cout<<endl;
	map<char,int>frequency2;
	for(int i=0;i<ss.length();i++){
		frequency[ss[i]]++;
	}
	for(int i=0;i<ss.length();i++){
	   if(frequency[ss[i]]>0){
	   	cout<<ss[i]<<" "<<frequency[ss[i]]<<endl;
	   	frequency[ss[i]]=0;
	   }
	}
	return 0;
}