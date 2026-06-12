#include<bits/stdc++.h>
using namespace std;

double myPow(double result, int idx, int n, double x) {
    if (idx == n) return result;

    return myPow(result*x, idx+1, n, x);
}

int main()
{
    int n = 10;
    double x = 2.0000, result = 1.0000;
    // int n = 3;
    // double x = 2.1000, result = 1.0000;

    cout << myPow(result, 0, n, x);

    return 0;
}

// bin tere vishal-shekhar
// tere bina ad rehman 
// mere bina preitam nikhil dsouza
// tere bin mithoon atif aslam