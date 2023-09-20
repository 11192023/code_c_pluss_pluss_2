#include<iostream>
using namespace std;
string s;
void next(string &s){
	int i=s.length()-2;
	while(i>=0&&s[i]>=s[i+1]){
		i--;
	}
    if(i==-1){
    	cout<<"BIGGEST";
	}else{
		int j=s.length()-1;
		while(s[i]>=s[j]){
			j--;
		}
		char tmp=s[i];
		s[i]=s[j];
		s[j]=tmp;
		int l=i+1;
		int r=s.length()-1;
		while(l<r){
			char tmp=s[l];
			s[l]=s[r];
			s[r]=tmp;
			l++;
			r--;
		}
		cout<<s;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int tc;
		cin>>tc;
		cout<<tc<<" ";
		cin>>s;
		next(s);
	}
	return 0;
}
