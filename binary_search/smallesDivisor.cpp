#include<bits/stdc++.h>
using namespace std;

bool isDivisible(vector<int> v, int mid, int k) {
    int sum = 0;
    for(int i = 0; i<v.size(); i++) {

        sum += ceil((double)(v[i]) / (double)(mid));
        
    }
    return sum <= k;
}

int smallestDivisor(vector<int> v, int threshold) {
    int n = v.size(), val = 0, ans = 0;
    for(int i = 0; i<n; i++) {
        val += v[i];
    }
    if (threshold < n) return -1;
    int low = 0, high = val, mid;
    while(low <= high) {
        mid = (low + high)/2;
        if(isDivisible(v, mid, threshold)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    // vector<int> v = {1,2,5,9};
    vector<int> v = {44,22,33,11,1};
    // int threshold = 6;
    int threshold = 5;
    cout << "ans is :" << ceil(9/2.0) << endl;
    cout << smallestDivisor(v, threshold);
    return 0;
}