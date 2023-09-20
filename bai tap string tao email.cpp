#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	 cin.ignore();
	 while(t--){
	 	string s;
	 	getline(cin,s);
	 	for(int i=0;i<s.length();i++){
	 		s[i]=tolower(s[i]);
		 }
		 vector<string>v;
		 stringstream ss(s);
		 string word;
		 while(ss>>word){
		 	v.push_back(word);
		 }
		 cout<<v[v.size()-1];
		 for(int i=0;i<v.size()-1;i++){
		 	cout<<v[i][0];
		 }
		 cout<<"@gmail.com"<<endl;
	 }
	return 0;
}
