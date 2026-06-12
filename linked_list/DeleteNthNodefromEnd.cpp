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
    if (head == nullptr) {
        cout << "Nothing to show!!" << endl;
    }
    Node* temp = head;
    while( temp!= nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int lengthOfLL(Node* head) {
    Node* temp = head;
    int len = 0;
    while(temp) { 
        len++;
        temp = temp-> next;
    }
    return len;
}

Node* deleteNthNodeFromEnd(Node* head, int posFromEnd) {
    if (!head || !head->next) return head;

    lengthOfLL(head);

}

int main()
{
    vector<int> v = {1,2,4,5,3,5,7,8,0,12,45,65,78,1};
    Node* head = convertArrayToLL(v);
    deleteNthNodeFromEnd(head);
    return 0;
}