#include<bits/stdc++.h>
using namespace std;

int count(vector<int> v1, int n) {
    if( n == 0) return -1;

    unordered_map<int, int> mpp;

    for(int i = 0; i<n;i++) {
        mpp[v1[i]]++;
    }

    for(auto it:mpp) {
        if (it.second> (n/2)) {
            return it.first;
        }
    }
    return -1;
}

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}


int main()
{
    // vector<int> v1 = {3,2,3};
    // vector<int> v1 = {2,2,1,1,1,2,2};
    vector<int> v1 = {1,1,1,1,2,3,4,1,5};
    int n = v1.size();

    // cout << count(v1, n);
    cout << majorityElement(v1);
    return 0;
}