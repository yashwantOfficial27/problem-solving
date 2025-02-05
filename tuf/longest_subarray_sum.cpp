#include<bits/stdc++.h>
using namespace std;

int longestSubArrayWithSum(vector<int> v1, int k, int n) {
    int j = 1, len = 0, max_len = 0, sum = 0;
    sort(v1.begin(), v1.end());
    for(int i = 0; i<n; i++) {
        sum += v1[i];
        len++;
        if (k == sum) {
            max_len = max(len, max_len);
        }
        else if(sum > k) {
            i = j-1;
            j++;
            sum = 0;
            len = 0;
        }
    }

    return max_len;
}

int main()
{
    vector<int> v1 = {1,2,3,4,5};
    int k = 9, n= 4;

    cout << longestSubArrayWithSum(v1, k, n);

    return 0;
}