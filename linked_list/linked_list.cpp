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

int lengthOfLL(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp) { // same as while( temp!= nullptr) {
        len++;
        temp = temp-> next;
    }
    return len;
}

string searchElementInLL(Node* head, int element) {
    Node* temp = head;
    bool found = false;
    while(temp) {
        if (element == temp-> data) {
            found = true;
        }
        temp = temp->next;
    }
    if (found) {
        return "Element Found!!";
    }
    return "Element not found!!";
}

int main()
{
    // Node x = Node(10, nullptr);
    vector<int> v = {15,2,3,4,5,0};
    Node* node =  convertArrayToLL(v);
    // LLTraversal(node);
    // cout << lengthOfLL(node);
    cout << searchElementInLL(node, 16);
    return 0;
}