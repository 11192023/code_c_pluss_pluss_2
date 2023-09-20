#include<iostream>
using namespace std;
int n=0;
int stack[10001];
void push(int x){
	stack[n]=x;
	n++;
}
void pop(){
	if(n>=1){
		n--;
	}
}
int top(){
	return stack[n-1];
}
int main(){
	int b;
	cin>>b;
	for(int i=1;i<=b;i++){
		push(i);
	}
	pop();
	cout<<top()<<endl;
	for(int i=0;i<n;i++){
		cout<<stack[i]<<" ";
	}
	return 0;
}
