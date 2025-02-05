#include<bits/stdc++.h>
using namespace std;

int findKthMissing(vector<int> v, int k) {    
    int ans, maxEle = v[v.size()-1], it = 0;
    maxEle += k+1;

    for(int i = 1; i<=maxEle+k+1; i++) {
        if (v[it] != i) {
            ans = i;
            k--;
        }
        else {
            it++;
        }

        if(k<=0){
            return ans;
        }
    }
    return -1;
}

int main()
{
    // vector<int> v = {4,7,9,10};
    // vector<int> v = {2,3,4,7,11};
    vector<int> v = {1,2,3,4};
    int k = 2;
    cout << findKthMissing(v, k);
    return 0;
}