#include<iostream>
using namespace std;
void check(){
	string s;
	int x;
	cin>>s>>x;
	int cnt=0;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='0'){
			cnt++;
		}else{
			break;
		}
		if(cnt>=x){
			break;
		}
	}
	if(cnt>=x){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
int main(){
	check();
	return 0;
}
