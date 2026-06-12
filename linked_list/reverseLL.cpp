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

Node* reverseUsingStack(Node* head) {
    if ( head == NULL || head->next == NULL ) return head;

    stack<int> st;
    Node* temp = head;

    while(temp) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

Node* reverseListInPlace(Node* head) {
    Node* temp = head;
    Node* prev = NULL;
    Node* next = NULL;

    while (temp)
    {
        // prev = temp;
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    return prev;
}

Node* reverseUsingRecursion(Node* head) {
    
}

int main()
{
    vector<int> v = {1,2,4,5,5,8,9,7,5,4,12,45,5};
    Node* head = convertArrayToLL(v);
    // head = reverseUsingStack(head);
    head = reverseListInPlace(head);
    LLTraversal(head);
    return 0;
}