#include<iostream>
#include<sstream>
#include<string>
using namespace std;
void bubble_sort( string word[],int newline){
	for(int i=0;i<newline-1;i++){
		for(int j=0;j<newline-i-1;j++){
			if(word[j]>word[j+1]){
				string tmp=word[j];
				word[j]=word[j+1];
				word[j+1]=tmp;
			}
		}
	}
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	const int max=100;
	string word[max];
	int size=0;
	while(ss>>token&&size<max){
		word[size]=token;
		size++;
	}
	int newline=size;
	for(int i=0;i<newline;i++){
		for(int j=i+1;j<newline;j++){
			if(word[i]==word[j]){
				for(int k=j;k<newline-1;k++){
					word[k]=word[k+1];
				}
				newline--;
				j--;
			}
		}
	}
	string b[100];
	int count=0;
	for(int i=0;i<newline;i++){
		b[count]=word[i];
		count++;
	}
	bubble_sort(word,newline);
	for(int i=0;i<newline;i++){
		cout<<word[i]<<" ";
	}
	cout<<endl;
    for(int i=0;i<count;i++){
    	cout<<b[i]<<" ";
	}
	return 0;
}