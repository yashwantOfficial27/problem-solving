#include<bits/stdc++.h>
using namespace std;

// int findMissingNo(int arr[], int n) {
//     for(int i = 0; i<=n; i++) {
//         if(arr[i] != i+1) {
//             return i+1;
//         }
//     }
//     return -1;
// }

int findMissingNo2(int arr[], int n) {

    int sum = (n*(n+1))/2;
    cout << sum << endl;
    int arraySum = 0;

    for(int i=0; i<n-1; i++) {
        arraySum += arr[i];
    }
    cout << arraySum << endl;

    return sum-arraySum;
}

int main()
{
    int n=5, arr[] = {1,2,4,5};
    // int n=3, arr[] = {1,3};
    // cout << findMissingNo( arr, n);
    cout << findMissingNo2(arr, n);
    
    // cout << result;
    return 0;
}   