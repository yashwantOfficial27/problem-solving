#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int nums) {
    for(int i = 0; i<n; i++) {
        if(arr[i] == nums) {
            return i;
        }
    }
    return -1;
}

int main()

{
    int arr[] = {1,2,3,4,5,6,7}, nums = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr, n, nums);
    result == -1 ? cout<< "Not Found\n": cout << result << endl;
    return 0;
}