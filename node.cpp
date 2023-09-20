#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
typedef struct Node* node;
node makenode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->next=NULL;
	return tmp;
}
int size(node a){
	int count=0;
	while(a!=NULL){
		count++;
		a=a->next;
	}
	return count;
}
bool empty(node a){
	return a==NULL;
}
void insertfirst (node &a,int x){
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}else{
		tmp->next=a;
		a=tmp;
	}
}
void insertlast(node &a,int x){
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
		cout<<"invalid!";
		return ;
	}
	if(pos==1){
		insertfirst(a,x);
	}
	if(pos==n+1){
		insertlast(a,x);
	}
	node p=a;
	for(int i=1;i<pos-1;i++){
		p=p->next;
	}
	node tmp=makenode(x);
	if(a==NULL){
		a=tmp;
	}
	else{
	tmp->next=p->next;
	p->next=tmp;
  }
}
void deletefirst(node&a){
	if(a==NULL){
		return;
	}
	a=a->next;
}
void deletelast(node&a){
	node pre=NULL;
	node af=a;
	while(af->next!=NULL){
		pre=af;
		af=af->next;
	}
	pre->next=af->next;
}
void deletecenter(node&a,int pos){
	int n=size(a);
	if(pos<=0||pos>n){
		cout<<"invalid!";
		return;
	}
	if(pos==1){
		deletefirst(a);
	}
	if(pos==n){
		deletelast(a);
	}
	node pre=NULL;
	node af=a;
	for(int i=1;i<pos+1;i++){
		pre=af;
		af=af->next;
	}
	pre->next=af->next;
	af->next=NULL;
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
		cout<<"enter of the choose"<<endl;
		cout<<"1.enter of the first position to insert"<<endl;
		cout<<"2.enter of the last position to insert"<<endl;
		cout<<"3.enter of the center position to insert"<<endl;
		cout<<"4.enter of the first position to delete"<<endl;
		cout<<"5.enter of the last position to delete"<<endl;
		cout<<"6.enter of the center position to delete"<<endl;
		cout<<"7.print"<<endl;
		cout<<"8.close"<<endl;
		cout<<"enter of the number: ";
		int x;cin>>x;
		if(x==1){
			cout<<"enter of the number: ";
			int x;cin>>x;
			insertfirst(head,x);
		}else if(x==2){
			cout<<"enter of the number: ";
			int x;cin>>x;
			insertlast(head,x);
		}else if(x==3){
			cout<<"enter of the number: ";
			int x;cin>>x;
			cout<<"enter of the positin: ";
			int pos;cin>>pos;
			insertcenter(head,x,pos);
		}else if(x==4){
			deletefirst(head);
		}else if(x==5){
			deletelast(head);
		}else if(x==6){
			cout<<"enter of the position: ";
			int pos;
			cin>>pos;
			deletecenter(head,pos);
		}else if(x==7){
			in(head);
		}else{
			break;
		}
	}
	return 0;
}
