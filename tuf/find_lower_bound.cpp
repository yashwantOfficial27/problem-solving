#include<bits/stdc++.h>
using namespace std;

int found_lower_bound(vector<int> v, int n) {
    if (n < v[0]) return -1;
    if (n > v[v.size()-1]) return v[v.size()-1];

    for(int i = 0; i< v.size(); i++)
        if ( v[i] > n) return i-1;

    return -1;
}

int findFloor(vector<int>& arr, int k) {
    int n = arr.size();
    if (k < arr[0]) return -1;
    if (k > arr[n-1]) return n-1;
    
    for (int i = 0; i<n; i++) {
        if (arr[i] > k ){
            return i-1;
        }
    }
    return -1;
}

int upperBound(vector<int> v, int k) {
    int n = v.size();
    int low = 0, high = n-1, mid;
    while(low <= high) {
        mid = (low + high)/2;
        if (v[mid] == k) {

        }
    }

}

int findLowerBoundBS(vector<int> v, int k) {
    int n = v.size();
    int low = 0, high = n-1, mid, ans = n;
    while(low <= high) {
        mid = (low + high)/2;
        if(v[mid] >= k) {
            ans = mid;
            high = mid -1;
        }
        else {
            low = mid+1;
        }
    }
    return ans;

    // int low = 0, high = n - 1;
    // int ans = n;

    // while (low <= high) {
    //     int mid = (low + high) / 2;
    //     // maybe an answer
    //     if (arr[mid] >= x) {
    //         ans = mid;
    //         //look for smaller index on the left
    //         high = mid - 1;
    //     }
    //     else {
    //         low = mid + 1; // look on the right
    //     }
    // }
    // return ans;
}

int main()
{
    // vector<int> v = {3,5,8,15,19};
    vector<int> v = {3,6,9,12,15,18,21,24,27};
    int n = 6;

    // cout << found_lower_bound(v, n);
    // cout << findLowerBoundBS(v, v.size(), n);
    cout << findLowerBoundBS(v, n);
    // cout << findFloor(v, n);
    return 0;
}


