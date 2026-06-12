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
    while(temp) { // same as while( temp!= nullptr) {
        len++;
        temp = temp-> next;
    }
    return len;
}

bool isPalindrome(Node* head) {
    Node* temp = head;
    vector<int> container;
    while(temp) {
        container.push_back(temp->data);
        temp = temp->next;
    }

    int low = 0, high = container.size()-1;
    while(low <= high) {
        if ( container[low] != container[high] ) {
            return false;
        }
        low++;
        high--;
    }
    return true;
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

void isPalindromeOptimized(Node* head) {
    Node* temp = head;
    Node* temp2 = head;
    Node* head2 = head;
    int halfLength = floor(lengthOfLL(head)/2);
    int count = 1;

    while(count < halfLength) {
        temp = temp->next;
        count++;
    }

    head2 = temp->next;
    temp->next = NULL;
    temp2 = head2;
    temp = head;

    while ( temp != nullptr ) {
        cout << temp->data << "\t" << temp2->data << endl;
        temp = temp->next;
        temp2 = temp2->next;
    }
}

bool isPaloindromeOptimized(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast->next != NULL &&  fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    slow = slow->next;
    Node* newHead = reverseListInPlace(slow);
    fast = head;
    while (fast && newHead) {
        if (fast->data != newHead->data) return false;
        fast = fast->next;
        newHead = newHead->next;
    }  
    return true;
}

int main()
{
    vector<int> v = {1,2,3,7,2,1};
    Node* head = convertArrayToLL(v);
    // if (isPalindrome(head))
    //     cout << "Palindrome!!";
    // else
    //     cout << "Not Palindrome!!";

    if (isPaloindromeOptimized(head))
        cout << "Palindrome!!";
    else
        cout << "Not Palindrome!!";
        
    return 0;
}