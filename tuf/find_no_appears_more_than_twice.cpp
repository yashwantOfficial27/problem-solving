#include<bits/stdc++.h>
using namespace std;

int find_no(vector<int> v1, int n) {
    if (n== 0) return -1;

    map<int, int> mp;

    for(auto ele:v1) {
        mp[ele]++;
    }

    for(auto ele:mp){
        if(ele.second == 1) return ele.first;
    }
}

int main() {map<int, int> m1;
    // vector<int> v1 = {2,2,1};
    vector<int> v1 = {4,1,2,1,2};
    int len = v1.size();
    cout << find_no(v1, len);
    return 0;
}