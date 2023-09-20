#include<iostream>
#include<set>
using namespace std;
int sumi(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
set<int>s;
void init(){
	s.insert(9);
	for(int i=1;i<1000;i++){
		if(s.find(sumi(i))!=s.end()){
			s.insert(i);
			cout<<i<<endl;
		}
	}
}
int sumstr(string s){
	int sum=0;
	for(auto x:s){
		sum+=x-'0';
	}
	return sum;
}
int main(){
	init();
	string a;
	cin>>a;
	int sum=sumstr(a);
	if(s.find(sum)!=s.end()){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}
