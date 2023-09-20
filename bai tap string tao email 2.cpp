#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<sstream>
#include<cctype>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	map<string,int>mp;
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			s[i]=std::tolower(s[i]);
		}
		vector<string>v;
	std::stringstream ss(s);
		string word;
		string res =" ";
		while(ss>>word){
			v.push_back(word);
		}
		res+=v[v.size()-1];
		for(int i=0;i<v.size()-1;i++){
			res+=v[i][0];
		}
		if(mp[res]==0){
			cout<<res<<"@gmail.com"<<endl;
		}else{
			cout<<res<<mp[res]+1<<"@gmail.com"<<endl;
		}
		mp[res]++;
	}
	return 0;
}
