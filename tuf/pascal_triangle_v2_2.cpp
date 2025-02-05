#include<bits/stdc++.h>
using namespace std;

void pascalTriangle(int n) {
    int res = 1;
    cout << res << "\t";
    for(int i = 1; i<n; i++) {
        res = res * (n-i);
        res = res / i;
        cout << res << "\t";
    }
}

int main()
{
    int n;
    cin >> n;
    pascalTriangle(n);
    return 0;
}