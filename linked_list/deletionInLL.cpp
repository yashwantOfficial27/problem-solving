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

Node* deleteHeadInLL(Node* head) {
    Node* temp = head;
    head = head -> next;
    free(temp);

    return head;
}

Node* deleteTailOfLL(Node* head) {
    if (head == nullptr || head-> next == nullptr) {
        cout << "Deleted element is " << head -> data << endl;
        free(head);
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL) {
        temp = temp-> next;
    }
    cout << "Deleted element is " << temp->next-> data << endl;
    temp->next = nullptr;
    free(temp->next);
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

Node* deleteFromPosition(Node* head, int pos) {

    if (head == NULL ) return NULL;
    if (pos < 1 || pos > lengthOfLL(head)) return NULL;

    Node* temp = head;
    Node* nextEle = temp -> next;
    int cnt = 1;

    if (pos == 1) {
        head = temp->next;
        free(temp);
        return head;
    }
    else if (pos == lengthOfLL(head)) {
        head = deleteTailOfLL(head);
        return head;
    }

    while(nextEle->next != NULL) {
        if (cnt == pos-1) {
            temp->next = nextEle->next;
            free(nextEle);
            return head;
        }

        temp = nextEle;
        nextEle = nextEle-> next;
        cnt++;
    }

    return head;
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    Node* head = convertArrayToLL(v);
    // head = deleteHeadInLL(head);
    // head = deleteTailOfLL(head);
    head = deleteFromPosition(head, 4);
    LLTraversal(head);
    return 0;
}