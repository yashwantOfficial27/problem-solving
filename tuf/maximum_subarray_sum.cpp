#include<bits/stdc++.h>
using namespace std;

int findMaximumSum(vector<int> v1, int n) {
    if (n == 0)  return -1;

    int maxSum = INT_MIN, sum;
    for(int i = 0; i<n; i++)  {
        sum = 0;
        for(int j = i; j<n; j++) {
            sum += v1[j];
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int kadaneMaxSum(vector<int> v1, int n) {
    int sum = 0, maxSum = INT_MIN, ansStart = -1, ansEnd = -1;
    for(auto ele: v1) {
        sum += ele;
        if (sum < 0) {
            sum = 0;
        }
        else {
            maxSum = max(sum, maxSum);
        }
    }

    return maxSum;
}

int main()
{
    vector<int> v1 = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> v1 = {1};
    int n = v1.size();

    // cout << findMaximumSum(v1, n);
    cout << kadaneMaxSum(v1, n);
    return 0;
}