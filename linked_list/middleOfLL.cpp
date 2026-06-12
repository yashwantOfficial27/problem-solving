#include<bits/stdc++.h>
#include<math.h>

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
    while(temp) {
        len++;
        temp = temp-> next;
    }
    return len;
}

int middleElementOfLL(Node* head) {
    if (head == NULL) {
        cout << "Head to null aa rha hai bhaiiii!!" << endl;
        return -1;
    }

    int middleIdx = ceil(lengthOfLL(head)/2.0);
    int cnt = 1;
    while(head) {
        if (cnt == middleIdx) {
            return head-> data;
        }
        head = head->next;
        cnt++;
    }
    return -1;
}


//TortoiseHare algorithm fast chlega 2 steps while slow walks single step at a time.
int optimizedmiddleElementOfLL(Node* head) {
    if (head == NULL) return NULL;

    // Node* temp = head;
    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8};
    Node* head = convertArrayToLL(v);
    // cout << middleElementOfLL(head);
    cout << optimizedmiddleElementOfLL(head);
    return 0;
}