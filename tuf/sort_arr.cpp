#include<bits/stdc++.h>
using namespace std;

void sortArr(vector<int> v1, int n) {
    sort(v1.begin(), v1.end());
    
    for(auto it:v1) {
        cout << it << "\t";
    }
}

int main()
{
    vector<int> v1 = {2,0,2,1,1,0};
    int n = v1.size();

    sortArr(v1, n);
    return 0;
}