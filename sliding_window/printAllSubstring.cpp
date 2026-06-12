#include<bits/stdc++.h>
using namespace std;

void printAllSubstring(string s) {
    string ans;
    for(int i = 0; i < s.length(); i++) {
        ans = "";
        for (int j = i; j < s.length(); j++) {
            ans += s[j];
            cout << ans << endl;
        }
    }
}

void printFixSizeOfSubarray(string s, int n) {
    string ans;
    for(int i = 0; i < s.length(); i++) {
        ans = "";
        for (int j = i; j < s.length(); j++) {
            ans += s[j];
            if (ans.length() == n)
                cout << ans << endl;
        }
    }
}

int printMaxSumOfSubarrayOfFixedSize(vector<int> v, int n) {
    int maxSum = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < i+n && i+n <= v.size(); j++)
        {
            sum += v[j]; 
        }
        maxSum = max(sum, maxSum);
    }
    // cout << maxSum << endl;
    return maxSum;
}

int optimizedPrintMaxOfSubarrayOfFixedSize(vector<int> v, int n) {
    int maxSum = INT_MIN, sum = 0,i = 0;
    for (i = 0; i < n; i++) {
        sum += v[i];
    }
    maxSum = sum;

    for (int j = i; j < v.size(); j++) {
        sum = sum + v[j] - v[j-n];
        maxSum = max(maxSum, sum);
    }

    return maxSum;
    
}

int OptimizedPrintMaxOfSubarrayOfFixedSizeWindow2(vector<int> v, int k) {
    int maxSum = INT_MIN, sum = 0, i = 0, j = 0, arrSize = v.size();
    
    while(j < arrSize) {
        sum += v[j];
        
        if ( j - i + 1 < k) {
            j++;
        }
        else if(j - i + 1 == k) {
            maxSum = max(sum, maxSum);
            sum -= v[i];
            i++;
            j++;
        }
    }
    return maxSum;
}

int main()
{
    string s = "abcd", ans;
    // printFixSizeOfSubarray(s, 3);
    // cout << printMaxSumOfSubarrayOfFixedSize({11,1,2,12,4,1,6,9,25}, 4);
    // cout << optimizedPrintMaxOfSubarrayOfFixedSize({11,1,2,12,4,1,6,9,25}, 4);
    cout << OptimizedPrintMaxOfSubarrayOfFixedSizeWindow2({11,1,2,12,4,1,6,9,25}, 4);
    return 0;
}