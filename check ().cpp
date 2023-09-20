#include<bits/stdc++.h>
using namespace std;
void soive(){
	string s;
	cin>>s;
	stack<char>st;
	for(auto x:s){
		if(x=='('){
			st.push(x);
		}else{
			if(st.empty()){
				cout<<"invalid !";
				return ;
			}else{
				st.pop();
			}
		}
	}
	if(st.empty()){
		cout<<"valid";
	}else{
		cout<<"invalid!";
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		soive();
	}
	return 0;
}
