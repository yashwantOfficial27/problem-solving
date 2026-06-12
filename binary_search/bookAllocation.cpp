#include<bits/stdc++.h>
using namespace std;

int assignBook(vector<int> v, int m, int books) {
    int bookAssigned = 1;

    long long sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] + sum <= books) {
            sum += v[i];
        }
        else {
            bookAssigned++;
            sum = v[i];
        }
    }
    return bookAssigned;
    
} 

int bookAllocation(vector<int> v, int m, int n) {
    if (n == 0)  return -1;

    int max = *max_element(v.begin(), v.end());
    int sum = accumulate(v.begin(), v.end(), 0);

    for (int i = max; i<= sum; i++) {
        int ans = assignBook(v, m, i);
        if ( ans == m ) {
            return i;
        }
    }
    return -1;
}

int bookAllocationBS(vector<int> v, int m, int n) {
    int low, high, mid;
    low = *max_element(v.begin(), v.end());
    high = accumulate(v.begin(), v.end(),0); 

    while(low <= high) {
        mid = (low + high)/2;
        int students = assignBook(v,m,mid);
        if(  students > m) {
            low = mid +1;
        }
        else {
            high = mid -1;
        }
    }
    return low;
}

int main()
{
    // vector<int> v = {12, 34, 67, 90};
    // int n=4, m=2;
    // n = 5, m = 4, arr[] = {25, 46, 28, 49, 24}
    vector<int> v = {25, 46, 28, 49, 24};
    int n=5, m=4;
    // cout << bookAllocation(v, m, n);
    cout << bookAllocationBS(v, m, n);
    return 0;
}