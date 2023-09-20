#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
typedef struct Node*node;
node makenode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
int size(node a){
	int cnt=0;
	while(a!=NULL){
		cnt++;
		a=a->next;
	}
	return cnt;
}
void insertfirst(node &a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
void insertlast(node&a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=tmp;
	}
}
void insertcenter(node&a,int x,int pos){
	int n=size(a);
	if(pos<=0||pos>n+1){
		cout<<"the position invalid!";
		return;
	}
	if(pos==1){
		insertfirst(a,x);
	}
	if(pos=n+1){
		insertlast(a,x);
	}
	node tmp=makenode(x);
	node p=a;
    for(int i=1;i<pos-1;i++){
    	p=p->next;
	}
	tmp->next=p->next;
	p->next=tmp;
}
void in(node a){
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
}
int main(){
	node head=NULL;
	while(1){
		cout<<"1.enter of the element into the position the first"<<endl;
		cout<<"2.enter of the element into the position the last"<<endl;
		cout<<"3.enter of the element into the position the any"<<endl;
		cout<<"4.print"<<endl;
		cout<<"5.close"<<endl;
		cout<<"please ,enter of the choice: ";
		int x;
		cin>>x;
		if(x==1){
			cout<<"enter the  number but you want to input: ";
			int n;
			cin>>n;
			insertfirst(head,n);
		}else if(x==2){
			cout<<"enter the number but you want to input: ";
			int n;
			cin>>n;
			insertlast(head,n);
		}else if(x==3){
			cout<<"enter of the position: ";
			int x;cin>>x;
			cout<<endl;
			cout<<"enter of the number but you want into input: ";
			int n;cin>>n;
			insertcenter(head,n,x);
		}else if(x==4){
			in(head);
		}else{
			break;
		}
	}
	return 0;
}
