#include<bits/stdc++.h>
using namespace std;

int first_occurence(vector<int> v, int x, int n) {
    int low = 0, high = n-1, mid, ans = -1;

    while(low <= high) {
        // mid = low + (high - low) /2;
        mid = low + (high - low)/2;
        if(v[mid] == x) {
            ans = mid;
            high = mid -1;
        }
        else if(v[mid] > x) {
            high = mid+1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int last_occurence(vector<int> v, int x, int n) {
    int low = 0, high = n-1, mid, ans;
    while(low <= high) {
        mid = low + (high - low)/2;
        if(v[mid] == x) {
            ans = mid;
            low = mid + 1;
        }
        else if (v[mid] > x) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    } 
    return ans;
}

int countFreq(vector<int>& arr, int target) {
    int n = arr.size();
    int first_idx = first_occurence(arr, target, n);
    int last_idx =  last_occurence(arr, target, n);

    if (first_idx == -1) {
        return 0;
    }
    else {
        return last_idx - first_idx + 1;
    }
}


int main()
{
    // vector<int> v = {2,2,3,3,3,3,4};
    // vector<int> v = {1, 1, 2, 2, 2, 2, 2, 3};
    vector<int> v = {1, 1, 2, 2, 2, 2, 3};
    int x = 2;
    // int result = lower_bound(v, x) - upper_bound(v, x) + 1;
    // cout << "Upper bound is : " << upper_bound(v, x) << endl;
    // cout << "Lower bound is : " << lower_bound(v, x) << endl;

    
    cout << countFreq(v,x);
    
    // cout << "Answer is : " << result;
    return 0;
}