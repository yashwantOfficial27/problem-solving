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

int lengthOfLoop(Node* head) {
    if (head == NULL) return 0;
    Node* temp = head;
    unordered_map<Node*, int> mpp;
    int count = 1;
    while( temp ) {

        if (mpp.find(temp) != mpp.end()) {
            return count - mpp[temp];
        }

        mpp[temp] = count++;
        temp = temp->next;
    }

    return 0;
}

int length(Node* slow, Node* fast) {
    int count = 1;
    fast = fast->next;

    while( slow != fast ) {
        count++;
        fast = fast->next;
    }
    return count;
}

int lengthOfLoopOptimized(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return length(slow, fast);
        }
    }
}

int main()
{
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);
    Node* sizth = new Node(6);
    Node* seventh = new Node(7);
    Node* eigth = new Node(8);
    Node* ninth = new Node(9);
    Node* tenth = new Node(10);
    Node* eleventh = new Node(11);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sizth;
    sizth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = tenth;
    tenth->next = eleventh;

    eleventh->next = third; 

    // cout << lengthOfLoop(head);
    cout << lengthOfLoopOptimized(head);

    // cout << findStartingPointOptimized(head);

    return 0;
}