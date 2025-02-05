#include<bits/stdc++.h>
using namespace std;

int find_element(vector<int> v, int x) {
    int n = v.size();
    int low = 0, high = n-1, mid, ans = -1;
    int low_element = v[low], high_element = v[high];

    while(low <= high) {
        mid = (low+high)/2;

        if (v[mid] == x) {
            ans = mid;
        }
        else if (v[mid] > x &&  low_element  >= x) {
            low = mid - 1;
            low_element = v[low];
        }
        else if (v[mid] > x && low_element <= x) {
            high = mid + 1;
            high_element = v[high];
        }
        else if (v[mid] < x && low_element <= x) {
            low = mid+1;
            low_element = v[low];
        }
        else if (v[mid] < x && low_element >= x) {
            high = mid - 1;
            high_element = v[high];
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {4,5,6,7,0,1,2,3};
    int x = 0;
    cout << find_element(v, x);
    return 0;
}