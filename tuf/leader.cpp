#include<bits/stdc++.h>
using namespace std;

vector<int> find_leader(vector<int> v1, int n) {
    if(n == 0) return {};

    vector<int> result;
    int curr;

    for(int i = 0; i<n; i++) {
        bool isLeader = true;
        curr = v1[i];
        for(int j = i+1; j<n; j++) {
            if(curr < v1[j] ) {
                isLeader = false;
                break;
            }
        }
        if (isLeader)
            result.push_back(curr);
    }

    return result;
}

vector<int> optimal_find_leader(vector<int> v1, int n) {
    if (n == 0) return {};
    vector<int> result;

    int max = INT_MIN;
    int start = 0, end = n-1;
    while (end >= start) {
        
    }

    return result;
}

int main(){
    // vector<int> v1 = {6,7,1,0};
    vector<int> v1 = {10, 22, 12, 3, 0, 6};
    int n = v1.size();
    vector<int> result;

    result = find_leader(v1, n);
    for(auto it: result) {
        cout << it << '\t';
    }
}