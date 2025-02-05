#include<bits/stdc++.h>
using namespace std;

int main()

{
    // vector<int> ip = {2,7,11,15}; //9
    int expected_sum=9;
    bool flag = false;
    // int arr[] = {3,2,4};
    int arr[] = {2,7,11,15};
    int len = sizeof(arr)/sizeof(arr[0]); 
    for(int i=0; i< len; i++) {
        for(int j = 1; j < len; j++) {
            if(i != j) {
                if (arr[i]+arr[j] == expected_sum) {
                    flag = true;
                    cout << i << ", " << j << endl;
                    break;
                }
            }
        }
        if(flag) {
            break;
        }
    }
    return 0;
}