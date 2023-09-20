#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cnt =0;
	for(auto x:s){
		if(x-'0'==0||x-'0'==1){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}
