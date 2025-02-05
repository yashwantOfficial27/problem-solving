#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &v, int dist, int totalCows) {
    int last = v[0], cntCows = 1;
    
    for(int i = 1; i < v.size(); i++ ) {
        if (v[i] - last >= dist) {
            cntCows++;
            last = v[i];
        }

        if (cntCows >= totalCows) return true;
    }
    return false;
} 


int aggressiveCows(vector<int> &v, int n, int k) {
    int limit = v[n-1] - v[0], ans = -1;
    sort(v.begin(), v.end());

    for(int i = 1; i <= limit; i++) {
        if ( isPossible(v, i, k) == false) {
            return (i-1);
        }
    }
    return limit;
}


int aggressiveCowsBS(vector<int> &v, int n, int k) {
    int high = v[n-1] - v[0], low = 1, mid, ans = -1; 

    sort(v.begin(), v.end());

    while ( low <= high) {
        mid = (low + high) /2;

        if (isPossible(v, mid, k) == false) {
            high = mid - 1;
        }
        else {
            ans = mid;
            low = mid + 1;
        }
    }
    return high;
}

int main()
{
    // vector<int> v = {0,3,4,7,10,9};
    vector<int> v = {1,2,8,4,9};
    int n = 5,  k = 3;
    // int n = 6, k =4;
    // cout << aggressiveCows(v, n, k);
    cout << aggressiveCowsBS(v, n, k);
    return 0;
}