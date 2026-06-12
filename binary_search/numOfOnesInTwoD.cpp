#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& v, int k) {
    int low = 0, high = v.size()-1, mid, ans = v.size()-1;

    while(low <= high) {
        mid = (low+high)/2;
        if (v[mid] >= k) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}

int countNumOfOnes(vector<int>& v) {
    return v.size() - lowerBound(v, 1);
}

int maxNumOfOnes(vector<vector<int>> &v) { 
    int ans = INT_MIN, idx = 0;
    int row = v.size(),  col = v[0].size();
    for (int i = 0; i<row; i++) {
        // ans = max(ans, countNumOfOnes(v[i])); 
        int numOfOnes = countNumOfOnes(v[i]);
        if (numOfOnes > ans) {
            ans = numOfOnes;
            idx = i;
        }
    }   
    return idx;
}

int main()
{
    // vector<vector<int>> v = {{1, 1, 1, 1}, {0, 0, 1, 1}, {0, 0, 0, 0}, {0, 1, 1, 1}};
    vector<vector<int>> v = {{0, 0, 0}, {0, 0, 1}, {0, 0, 1}};
    // [[0,0,0],[0,0,1],[0,0,1]]
    int row = 3, col = 3;
    // cout << lowerBound(v, k);
    cout << maxNumOfOnes(v);
    return 0;
}