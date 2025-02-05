
#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void pascalTriangle(int r) {
    vector<int> res;
    for(int c = r; c>0;c--) {
        int element =  nCr(r - 1, c-1);
        res.push_back(element);
    }
    
    for(auto ele:res) {
        cout << ele << '\t';
    }
}

int main()
{
    // int r = 5; // row number
    // int c = 3; // col number
    int r;
    cin >> r;
    pascalTriangle(r);
    // cout << "The element at position (r,c) is: "
    //         << element << "\n";
    return 0;
}
        
        