#include<iostream>
using namespace std;
struct student{
	string name ;
	int id;
	int gpa;
};
struct Node{
	student s;
	Node*next;
};
typedef struct Node*  node;
node makenode(){
	student s;
	cin.ignore();
	cout<<"enter of the name for the student: ";
	getline(cin,s.name);
	cout<<endl;
	cout<<"enter of the id for the student: ";
	cin>>s.id;
	cout<<endl;
	cout<<"enter of the gpa for the student: ";
	cin>>s.gpa;
	cout<<endl;
	node tmp=new Node();
	tmp->s=s;
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
void insertfirst(node &a){
	node tmp=makenode();
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
void insertlast(node&a){
	node tmp=makenode();
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
void insertcentor(node&a,int pos){
	int n=size(a);
	if(pos<=0&&pos>n+1){
		cout<<"position invalid!";
		return;
	}
	if(pos==1){
		insertfirst(a);
		return ;
	}
	if(pos==n+1){
		insertlast(a);
		return ;
	}
	node tmp=makenode();
    node pre=NULL,af=a;
    for(int i=1;i<pos;i++){
    	pre=af;
    	af=af->next;
	}
	if(a==NULL){
		return;
	}else{
		tmp->next=pre->next;
		pre->next=tmp;
   }
}
void deletefirst(node&a){
	if(a==NULL)return;
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
void deletecenter(node &a,int pos){
	int n=size(a);
	if(pos==0&&pos==n+1){
		cout<<"position invalid!";
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
    for(int i=1;i<pos;i++){
    	pre=af;
    	af=af->next;
	}
	if(a==NULL){
		return;
	}else
	{
		pre->next=af->next;
	}
}
void print2(student s){
	cout<<"name: "<<s.name<<endl;
	cout<<"id: "<<s.id<<endl;
	cout<<"gpa: "<<s.gpa<<endl;
}
void print(node a){
	cout<<"------------"<<endl;
	while(a!=NULL){
		print2(a->s);
		a=a->next;
	}
	cout<<endl;
	cout<<"------------"<<endl;
}
int main(){
	node head=NULL;
	while(1){
		cout<<"---------these chosen for you----------"<<endl;
		cout<<"1. insert a element in the first of the list"<<endl;
		cout<<"2. insert a element in the last of the list"<<endl;
		cout<<"3. insert a element in the any inside the list"<<endl;
		cout<<"4. delete a element in the first of the list"<<endl;
		cout<<"5. delete a element in the last of the list"<<endl;
		cout<<"6. delete a elemet in the any in the list"<<endl;
		cout<<"7.print in the list"<<endl;
		cout<<"8.close in the list"<<endl;
		cout<<"please.choice: ";
		int n;cin>>n;
		cout<<endl;
		if(n==1){
			cout<<"the element want to insert first into the list: "<<endl;
			insertfirst(head);
		}
		else if(n==2){
			cout<<"the element want to insert last into the list: "<<endl;
			insertlast(head);
		}else if(n==3){
			cout<<"the position want to insert: ";
			int pos;cin>>pos;
			cout<<endl;
			insertcentor(head,pos);
		}else if(n==4){
			deletefirst(head);
		}else if(n==5){
			deletelast(head);
		}else if(n==6){
			cout<<"the position want to delete in the any in the list: ";
			int pos;cin>>pos;
			cout<<endl;
			deletecenter(head,pos);
		}
		else if(n==7){
			print(head);
		}
		else if(n==8){
			break;
		}
	}
	return 0;
}
