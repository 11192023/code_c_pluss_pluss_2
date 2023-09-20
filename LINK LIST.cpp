#include <iostream>
#include <vector>
using namespace std;

struct Node {
    string data;
    Node* next;
};

typedef struct Node* node;

node makenode(string x) {
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

bool empty(node a) {
    return a == NULL;
}

int size(node a) {
    int cnt = 0;
    while (a != NULL) {
        cnt++;
        a = a->next;
    }
    return cnt;
}

void push(node&a,string s){
	node tmp=makenode(s);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
void pop(node&a)
{
	node pre=NULL;
	node af=a;
	while(af->next!=NULL){
		pre=af;
		af=af->next;
	}
	pre->next=af->next;
}

string front(node& a) {
    if (a == NULL) return "";  // Return an empty string for an empty list
    node p = a;
    while (p->next != NULL) {
        p = p->next;
    }
    return p->data;
}

int main() {
    node head = NULL;
    push(head, "6");
    push(head, "8");
    vector<string> v;
    while (!empty(head)) {  // Use the empty function to check if the list is empty
        string front1 = front(head);
        pop(head);
        if (front1.length() == 6) break;
        v.push_back(front1);
        push(head, to_string(stoll(front1) * 10 + 6));
        push(head, to_string(stoll(front1) * 10 + 8));
    }
    
    for (auto x : v) {
        cout << x << " ";
    }
    return 0;
}

