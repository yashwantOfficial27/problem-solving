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

Node* segregate(Node* head) {
    Node* temp = head;
    if (!head || !head->next) return head;
    vector<int> even_vec, odd_vec;
    while(temp){
        // cout << "temp data is " << temp->data << "\n";
        if (temp->data % 2 == 0){
            even_vec.push_back(temp->data);
        }
        else {
            odd_vec.push_back(temp->data);
        }
        temp = temp->next;
    }

    temp = head;
    for(auto ele:odd_vec) {
        temp->data = ele;
        temp = temp->next;
    }

    for(auto ele:even_vec) {
        temp->data = ele;
        temp = temp->next;
    }
    return head;
}

Node* segregateEvenOddOptimized(Node* head) {
    Node* evenLL = new Node(-1), *evenTail;
    Node* oddLL = new Node(-1), *oddTail;

    Node* curr = head, *temp;
    while (curr)
    {
        temp = curr;

        if (temp->data % 2 == 0) {
            evenLL = temp;
            evenTail = temp;
        }
        else {
            oddLL = temp;
            oddTail = temp;
        }
    }
    

}

int main()
{
    // vector<int> v = {1,2,3,4,5,6};
    vector<int> v = {1,2,4,5,3,5,7,8,0,12,45,65,78,1};
    Node* head = convertArrayToLL(v);
    head = segregate(head);
    LLTraversal(head);


    return 0;
}