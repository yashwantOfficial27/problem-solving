#include<bits/stdc++.h>
using namespace std;

int findMinimumElementInRotatedBS(vector<int> v) {
    if (v.size() <= 0) return -1;
    int low = 0, high = v.size()-1, mid, ans = INT_MAX;
    while(low <= high) {
        mid = (low+high)/2;
        if(v[low] <= v[mid]) {
            ans = min(v[low], ans);
            low = mid + 1;
        }
        else {
            ans = min(v[mid], ans);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {4,5,1,2,3};
    cout << findMinimumElementInRotatedBS(v);
    return 0;
}
