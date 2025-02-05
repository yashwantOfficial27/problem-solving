#include<bits/stdc++.h>
using namespace std;

int binarySearchIterative(vector<int> v, int n) {
    if (v.size() == 0) return -1;

    // variable d & i 
    int low = 0, high = v.size()-1, mid;

    while(low <= high) {
        mid = (low + high)/2;
        if(v[mid] == n) {
            return 1;
        }
        else if (n > v[mid] ) {
            low = mid +1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}


int binarySearchRecursive(vector<int> v, int low, int high, int n) {
    if ( low <= high ) {        
        int mid = (low + high )/2;
        if (v[mid] == n) return 1;
        else if (n > v[mid]) {
            return binarySearchRecursive(v, mid+1, high, n);
        }
        else {
            return binarySearchRecursive(v, low, mid-1, n);

        }
    } 
    return -1;
}

int main()
{
    vector<int> v = {3,4,6,7,9,12,16,17,19};
    int n = 20, ans;
    // ans = binarySearchIterative(v, n);
    // cout << v.size() << endl;
    ans = binarySearchRecursive(v, 0, v.size()-1, n);
    if (ans == 1) 
        cout << "Element Found!!";
    else 
        cout << "Element Not Found!!";

    return 0;
}