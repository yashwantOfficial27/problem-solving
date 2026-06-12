#include<bits/stdc++.h>
using namespace std;

vector<int> subarrayMax(vector<int> v, int k) {
    if (v.size() == 0) return {};
    int i = 0, j = 0, maxEle = INT_MIN;
    vector<int> canBeMaxVec;
    while ( j < v.size() ) {
        // task need to do everytime
        canBeMaxVec.push_back(v[j]);
        for (auto it: canBeMaxVec)
        {
            if (it < v[j]) {
                canBeMaxVec.erase(it);
            }
        }
        

        if ( j - i + 1 < k ) {
            j++;
        }
        else if ( j - i + 1 == k) {
            // calculation
        }
    }
}

int main()
{
    vector<int> v = {1,2,3,1,4,5,2,3,6};
    int k = 3;
    subarrayMax(v, k);
    return 0;
}