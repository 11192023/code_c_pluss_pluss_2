#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node*left;
	struct node*right;
};
typedef struct node node;
typedef node*tree;
void kt(tree&t){
	t=NULL;
}
void makenode(tree&t,int x){
	if(t==NULL){
		struct node*tmp=new struct node();
		tmp->data=x;
		tmp->left=NULL;
		tmp->right =NULL;
		t=tmp;
	}else {
		if(t->data>x){
			makenode(t->left,x);
		}else if(t->data<x){
			makenode(t->right,x);
		}
	}
}
void LNR(tree t){
	if(t!=NULL){
		LNR(t->left);
		cout<<t->data<<endl;
		LNR(t->right);
	}
}
void delete_node(tree&t ,int x){
	if(t==NULL){
		return ;
	}else {
		if(t->data>x){
			delete_node(t->left,x);
		}else if(t->data<x){
			delete_node(t->left,x);
		}else{
	     struct node* tmp=t;
	      if(t->left==NULL){
	      	t=t->right;
		  }else if(t->right==NULL){
		  	t=t->left;
		  }
		  delete(tmp);
		}
	}
}
int main(){
	tree t;
	kt(t);
	while(1){
		system("cls");
		cout<<"list of these option for apply on tree"<<endl;
		cout<<"1. enter if the input for tree"<<endl;
		cout<<"2. print "<<endl;
		cout<<"3. close "<<endl;
		cout<<"4.delete"<<endl;
		cout<<"invite to choose above"<<endl;
		int x;
		cin>>x;
		if(x==1){
		   cout<<"enter of the number want to add in a tree"<<endl;
		   int x;
		   cin>>x;
		   makenode(t,x);
		}else if(x==2){
			LNR(t);
			system("pause");
		}else if(x==4){
			cout<<"enter of the number need to delete"<<endl;
			int x;
			cin>>x;
			delete_node(t,x);
		}
		else{
			break;
		}
	}
	return 0;
}