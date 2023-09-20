#include<iostream>
using namespace std;
string a,b;
string sum( ){
	while(a.size()<b.size())a="0"+a;
	while(a.size()>b.size())b="0"+b;
	int len=a.size();
	string res="";
	int rem=0;
	for(int i=len-1;i>=0;i--){
		int num=int(a[i]-'0')+int(b[i]-'0')+rem;
		res=char(num%10+'0')+res;
		rem=num/10;
	}
	if(rem>0)return char(rem+'0')+res;
	else
	return res;
}
int main(){
	cout<<"enter of the t: ";
	int t;
	cin>>t;
	while(t--){
		cout<<"enter of the number"<<endl;
		cout<<"the first number: ";
		cin>>a;
		cout<<"the second number: ";
		cin>>b;
		for(int i=0;i<a.size();i++){
			if(a[i]=='6')a[i]='5';
		}
		for(int i=0;i<b.size();i++){
			if(b[i]=='6')b[i]='5';
		}
		cout<<"the sum smallest "<<sum()<<endl;
		for(int i=0;i<a.size();i++){
			if(a[i]=='5')a[i]='6';
		}
		for(int i=0;i<b.size();i++){
			if(b[i]=='5')b[i]='6';
		}
		cout<<"the sum biggest "<<sum()<<endl;
	}
	return 0;
}
