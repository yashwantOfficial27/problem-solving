#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> v){
    if (v.size() == 0) return -1;
    v.push_back(-1);
    for(int i = 0;i<v.size()-1; i++) {
        if (v[i] >  v[i+1] && v[i] > v[i-1]) {
            return i;
        }
    }
    return -1;
}

int findPeakElementByBS(vector<int> v) {
    if (v.size() == 0) return -1;
    if (v.size()  == 1) return 0;

    v.push_back(-1);

    int low = 0, high = v.size()-2, mid;

    while(low <= high) {
        mid = (low + high)/2;
        
    }


    return -1;
}

int main()
{
    vector<int> v = {1,2,3,4,5,6,1,2};
    cout << findPeakElement(v);
    return 0;
}