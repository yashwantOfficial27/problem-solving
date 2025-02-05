#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    vector<int> result;
    int i = 0, j = 0;

    // Only consider the first m elements of nums1
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j]) {
            result.push_back(nums1[i]);
            i++;
        } else {
            result.push_back(nums2[j]);
            j++;
        }
    }

    // Add remaining elements from nums1
    while(i < m) {
        result.push_back(nums1[i]);
        i++;
    }

    // Add remaining elements from nums2
    while(j < n) {
        result.push_back(nums2[j]);
        j++;
    }

    return result;
}

int main() {
    // vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    // vector<int> nums2 = {2, 5, 6};

    // vector<int> result = merge(nums1, 3, nums2, 3);

    // for(auto ele : result) {
    //     cout << ele << "\t";
    // }

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int valueToReomve = 3;
    int newLength = 0;

    for(int i = 0; i<n; i++) {
        if (arr[i] != valueToReomve) {
            arr[newLength++] = arr[i];
        }
    }

    for(int i = 0; i<newLength; i++) {
        cout << arr[i] << "\t";
    }

    return 0;
}
