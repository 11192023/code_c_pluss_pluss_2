#include<iostream>
#include<sstream>
using namespace std;
void bubble_sort(string word[],int count){
	for(int i=0;i<count-1;i++){
		for(int j=0;j<count-i-1;j++){
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
	int count=0;
	while(ss>>token&&count<max){
		word[count]=token;
		count++;
	}
	bubble_sort(word,count);
	for(int i=0;i<count;i++){
		cout<<word[i]<<" ";
	}
	return 0;
}