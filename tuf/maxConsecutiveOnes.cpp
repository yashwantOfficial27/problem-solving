#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> v1, int n) {
    int count = 0, max_count = 0;
    for(auto ele:v1) {
        if(ele == 1) {
            count++;
            max_count = max(count, max_count);
        }
        else {
            count = 0;
        }
    }

    return max_count;
}

int main()

{
    // vector<int> v1 = {1,1,0,1,1,0,1,1,1};
    vector<int> v1 = {1, 0, 1, 1, 0, 1} ;
    int len = v1.size();
    cout << maxConsecutiveOnes(v1, len);
    return 0;
}