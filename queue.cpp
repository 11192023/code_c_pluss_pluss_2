#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	cout<<q.size()<<endl;
	q.pop();
	q.pop();
	q.pop();
	cout<<q.empty()<<endl;
	return 0;
}
