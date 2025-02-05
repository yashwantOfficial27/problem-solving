#include<bits/stdc++.h>
using namespace std;

int main()

{
    // int arr[] = {2,5,1,3,0,30}, n=6, max = arr[0];
    vector<int> arr = {2,5,1,3,0,30};
    int max = arr[0];
    for(int i = 1; i<arr.size(); i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    // for(auto ele: arr) {
    //     if (max < ele) {
    //         max = ele;
    //     }
    // }


    cout << "Maximum element is : " << max << endl;

    return 0;
}