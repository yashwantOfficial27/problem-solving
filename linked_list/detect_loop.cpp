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

bool detect_loop(Node* head) {
    Node* temp = head;

    unordered_map<Node*, int> nodeMap;

    while (temp)
    {
        if(nodeMap.find(temp) != nodeMap.end()) {
            return true;
        }

        nodeMap[temp] = 1;
        temp =  temp->next;
    }
    return false;
}

bool detectLoop(Node* head) {
    unordered_map<Node*, int> mpp;
    Node* temp = head;
    while(temp) {
        if (mpp.find(temp) != mpp.end()) {
            return true;
        }

        mpp[temp] = 1;
        temp = temp->next;
    }

    return false;
}

bool detectLoopOptimizedVersion(Node* head) { // using Hare & Tortoise algorithm
    Node* temp = head;
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }

    return false;
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    fifth->next = third; 

    if (detectLoopOptimizedVersion(head)) {
        cout << "Loop exist" << endl;
    } else {
        cout << "Loop doesn't exist" << endl;
    }


    return 0;
}