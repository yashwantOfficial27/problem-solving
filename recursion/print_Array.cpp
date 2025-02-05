#include<bits/stdc++.h>
using namespace std;

void printRevArray(vector<int>nums_arr, int n) {
    if(n >= nums_arr.size()) {
        return;
    }

    cout << nums_arr[n] << "\t";
    printRevArray(nums_arr, n+1);
}

void printArray(vector<int>numsArr) {
    for (auto ele:numsArr) {
        cout << ele << "\t";
    }
}

void reverseArray(vector<int>numsArr, int start, int end) {
    if ( start < end ) {
        swap(numsArr[start], numsArr[end]);
        reverseArray(numsArr, start+1, end-1);
    }
}

int main() {
    vector<int> nums_arr = {1,2,3,4,5};
    // printRevArray(nums_arr, 0);
    reverseArray(nums_arr, 0, nums_arr.size()-1);
    printArray(nums_arr);
    return 0;
}

// nums_arr.size()