#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<s.length()-2;i++){
		if(s=="")break;
		if(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='0'){
			ans+=3;
			s.erase(i,3);
			i=-1;
		}
	}
	cout<<ans;
	return 0;
}
