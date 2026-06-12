#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }

        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

Node* convertArrayToLL(vector<int> &v) {
    Node* head = new Node(v[0]);
    Node* mover = head;

    for(int i = 1; i< v.size(); i++) {
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void LLTraversal(Node* head) {
    Node* temp = head;
    while( temp!= nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Node* insertAtHead(Node* head, int ele) {
    return new Node(ele, head);
}

Node* insertAtTail(Node* head, int ele) {
    Node* temp = head;
    Node* mover = temp;
    while(temp->next) {
        mover = temp->next;
        temp = mover;
    }
    temp->next = new Node(ele);
    return head;
}

int lengthOfLL(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp) { // same as while( temp!= nullptr) {
        len++;
        temp = temp-> next;
    }
    return len;
}

Node* insertAtPosition(Node* head, int ele, int pos) {
    int llLength = lengthOfLL(head);
    if (pos < 1 || pos > llLength+1) {
        cout << "Invalid Position!!" << endl;
        return NULL;
    }

    if (pos == 1) {
        return insertAtHead(head, ele);
    }
    else if (pos == llLength + 1) {
        return insertAtTail(head, ele);
    }
    else {
        Node* temp = head;
        Node* mover;
        int cnt = 1;
        while(temp->next){
            if (cnt == pos-1) {
                Node* mover = new Node(ele, temp->next);
                temp->next = mover;
                break;
            }    
            temp = temp->next;
            cnt++;
        }
    }

    return head;
}

int main()
{
    vector<int> v = {1,2,4,5};
    Node* head = convertArrayToLL(v);
    // head = insertHead(head, 9);
    // head = insertTail(head, 25);
    head = insertAtPosition(head, 10,5);
    LLTraversal(head);
    return 0;
}