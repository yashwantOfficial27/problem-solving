#include<bits/stdc++.h>
using namespace std;

vector<int> negativeInSubarray(vector<int> v, int k) {
    if (v.size() == 0) return {0};

    int sum, i = 0, j = 0;
    vector<int> result, negEleVec;
    while (j < v.size())
    {
        if (v[j] < 0) {
            negEleVec.push_back(v[j]);
        }    
        if ( j - i + 1 < k) {
            j++;
        }
        else if( j - i + 1 == k) {
            if (negEleVec.size() == 0) {
                result.push_back(0);
                j++;
                i++;
            }
            else {
                result.push_back(negEleVec[0]);
                j++;
                if (v[i] == negEleVec[0]) {
                    negEleVec.erase(negEleVec.begin());
                }    
                i++;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> v = {12,-1,-7,8,15,30,16,28}, rsult;
    int k = 3;

    rsult = negativeInSubarray(v, k);
    for (auto it: rsult) {
        cout << it << "\t";
    }

    return 0;
}