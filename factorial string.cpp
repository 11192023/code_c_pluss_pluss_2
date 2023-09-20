#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	string res="";
	for(char x:s){
		if(x=='4'){
			res+="223";
		}else if(x=='6'){
		    res+="35";
		}else if(x=='8'){
			res+="2227";
		}else if(x=='9'){
			res+="3327";
		}else if(x!='1'&&x!='0'){
			res+=x;
		}
	}
	sort(res.begin(),res.end(),greater<char>());
	cout<<res;
	return 0;
}
