#include<bits/stdc++.h>
using namespace std;

long long func(int n, int m) {
    for(int i = 1; i<= m; i++) {
        long long val = 1;
        for( int j = 1; j<=n; j++) {
            val *= i;
            // cout << "value of i is : " << i << " and value of i*i is " << val << endl;
        }

        if (val == m) {
            return i;
        }
        else if (val > m) {
            return -1;
        }
    }
}

long long powerOf(int x, int n) {
    return pow(x, n);
}

long long nthRootByBS(int n, int m) {
    int low = 1, high = m, mid;
    while(low <= high) {
        mid = (low + high)/2;
        long long val = powerOf(mid, n); 
        if(val == m) {
            return n;
        }
        else if (val > m) {
            high = mid -1;
        }
        else {
            low = mid + 1;
        }
    }
    return -1;
}



int main()
{
    int n, m;
    cin >> n >> m;
    // cout << "value of n is " << n << " and value of m is " << m  << endl;

    // cout << func(n, m);
    cout << nthRootByBS(n, m);
    return 0;
}