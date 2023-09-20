#include<iostream>
#include<vector>
using namespace std;
struct Node{
	string data;
	Node*next;
};
typedef struct Node*node;
node makenode(string x){
	node tmp =new Node();
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
void push(node&a,string x)
{
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void pop(node&a){
	if(a==NULL)return;
	a=a->next;
}
string front(node&a){
	while(a->next!=NULL){
		a=a->next;
	}
	return a->data;
}
int main(){
	node head=NULL;
	push(head,"6");
	push(head,"8");
	vector<string>v;
	v.push_back("6");
	v.push_back("8");
	while(1){
		string front1=front(head);
		pop(head);
		if(front1.length()==2)break;
		push(head,to_string(stoll(front1)*10+6));
		push(head,to_string(stoll(front1)*10+8));
		v.push_back(to_string(stoll(front1)*10+6));
		v.push_back(to_string(stoll(front1)*10+8));
	}
	for(auto x:v){
		cout<<x<<" ";
	}
	return 0;
}

