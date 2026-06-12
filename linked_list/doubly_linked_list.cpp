#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data1, Node* prev1, Node* next1) {
        data = data1;
        prev = prev1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};

Node* convertArrayToDLL(vector<int> &v) {
    if (v.size() == 0) return NULL;
    
    Node* head = new Node(v[0]);
    Node* temp = head;

    for (int i = 1; i < v.size(); i++){
        Node* newNode = new Node(v[i], temp, nullptr);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

void traverseDLL(Node* head) {
    if (head == NULL) {
        cout << "DLL is empty!";
        return;
    }
    Node* temp = head;
    while( temp ) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Node* insertAtTail(Node* head, int n) {
    if (head == NULL ) return NULL;
    Node* temp = head;
    while(temp->next) {
        temp = temp->next;
    }
    Node* newptr = new Node(n, temp, nullptr);
    temp->next = newptr;

    return head;
}


Node* deleteFromTail(Node* head) {
    Node* temp = head;

    while(temp->next) {
        temp = temp->next;
    }

    temp->prev->next = nullptr;
    free(temp);

    return head;
}


void reverseDLL(Node* head) {
    while(head->next) {
        head = head->next;
    }
    // head = head;
    while(head) {
        cout << head->data << endl;
        head = head->prev;
    }
} 
int main()
{
    vector<int> v = {1,2,3,4,5};
    Node* head;
    head = convertArrayToDLL(v);
    // head = insertAtTail(head, 25);
    // head = deleteFromTail(head);
    // traverseDLL(head);
    reverseDLL(head);
    return 0;
}