#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int>s;
	s.insert(100);
	s.insert(100);
	s.insert(200);
	cout<<s.size();
	return 0;
}
