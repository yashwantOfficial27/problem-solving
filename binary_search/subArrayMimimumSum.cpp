#include<bits/stdc++.h>
using namespace std;

int countPartition(vector<int> v, int k, int i) {
    int noOfPartition = 0, sum= 0;
    
    for(int i=0; i<v.size(); i++) {
        
    }
}

int largestSubarraySumMinimized(vector<int> v, int n, int k) {
    int low = *max_element(v.begin(), v.end());
    int high = accumulate(v.begin(), v.end(), 0);

    for(int i = low; i<= high; i++) {
        
    }
}

int main()
{
    vector<int> v = {1,2,3,4,5};
    int n = 5, k = 3;
    largestSubarraySumMinimized(v,n,k);
    return 0;
}