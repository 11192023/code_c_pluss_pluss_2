#include<iostream>
using namespace std;
struct Node{
	int data;
	Node*next;
};
typedef struct Node*node;
node makenode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
bool empty(node a){
	return a==NULL;
}
int size(node a){
	int cnt=0;
	while(a!=NULL){
		cnt++;
		a=a->next;
	}
	return cnt;
}
void push(node &a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
void pop(node&a){
	if(a==NULL)return;
	a=a->next;
}
int main(){
	node head=NULL;
	int n;
	cin>>n;
	while(n){
		int r=n%2;
		push(head,r);
		n/=2;
	}
	while(!empty(head)){
		cout<<head->data;
		pop(head);
	}
	return 0;
}
