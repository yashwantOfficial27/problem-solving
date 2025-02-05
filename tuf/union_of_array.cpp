#include<bits/stdc++.h>
using namespace std;

void unionOfArrayUsingSet(vector<int> v1, vector<int> v2) {
    set<int> s1;
    for(auto ele:v1) {
        s1.insert(ele);
    }

    for(auto ele:v2) {
        s1.insert(ele);
    }

    for(auto ele:s1) {
        cout << ele << '\t';
    }
}

void unionOfArray(vector<int> v1, vector<int> v2) {
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    
    
}

int main() {
    vector<int> v1 = {1,2,3,4,5}, v2 = {2,3,6,4,5};
    // unionOfArrayUsingSet(v1, v2);
    unionOfArray(v1, v2);
    return 0;
}