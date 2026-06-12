#include<bits/stdc++.h>
using namespace std;

int findMaxWindowWithSumK(vector<int> v, int k) {
    if (v.size() == 0) return 0;
    int i = 0, j = 0, maxSize = INT_MIN, arrSize = v.size(), sum = 0;

    while( j < arrSize) {
        sum += v[j];

        if (sum < k) {
            j++;
        }
        else if (sum == k) {
            maxSize = max(maxSize, sum);
            j++;
        }
        else if (sum > k) {
            sum -= v[i];
            i++;
        }
    }
    return maxSize;
}

int main()
{
    vector<int> v = {4,1,1,1,2,3,5};
    int k = 5;
    cout << findMaxWindowWithSumK(v, k); 
    return 0;
}