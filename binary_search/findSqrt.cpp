#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n) {
    // return  sqrt(n);
    int ans = -1, prev;
    for(int i = 1; i<(n/2)+1; i++) {
        if (i*i <= n) {
            ans =  i;
        }
        else {
            break;
        }
        
    }
    return ans;
}

int findSqrtByBS(int n) {
    int ans = -1, low = 0, high = n-1, mid;
    while(low<=high) {
        mid = (low+high)/2;
        if (mid * mid <= n) {
            ans = mid;
            low = mid+1;
        }
        else {
            high = mid - 1;
        } 
    }
    return ans;
}

int main()
{
    int  n;
    cin >> n;
    // cout << findSqrt(n);
    cout << findSqrtByBS(n);
    return 0;
}