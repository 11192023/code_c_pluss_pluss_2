#include <iostream>
using namespace std;

struct node {
    int data;
    node *pNext;
};

node *head = NULL;

node *createNode(int data) {
    node *p = (node *)malloc(sizeof(node));
    p->data = data;
    p->pNext = NULL;
    return p;
}

void addHead(int data) {
    node *p = createNode(data);
    if (head == NULL) {
        head = p;
    } else {
        p->pNext = head;
        head = p;
    }
}

void addTail(int data) {
    node *p = createNode(data);
    if (head == NULL) {
        head = p;
    } else {
        node *t = head;
        while (t->pNext != NULL) {
            t = t->pNext;
        }
        t->pNext = p;
    }
}

void delHead() {
    if (head == NULL) {
        cout << "Linkedlist is empty";
    } else {
        head = head->pNext;
    }
}

void delTail() {
    if (head == NULL) {
        cout << "Linkedlist is empty";
    } else {
        if (head->pNext == NULL) {
            head = NULL;
        } else {
            node *t = head;
            while (t->pNext->pNext != NULL) {
                t = t->pNext;
            }
            t->pNext = NULL;
        }
    }
}

void printLinkedList() {
    if (head == NULL) {
        cout << "LinkedList is empty";
    } else {
        node *t = head;
        while (t != NULL) {
            cout << t->data << " ";
            t = t->pNext;
        }
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        addTail(i);
    }
    delTail();
    delTail();
    printLinkedList();
    return 0;
}
