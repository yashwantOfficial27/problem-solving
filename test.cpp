#include<bits/stdc++.h>
using namespace std;

int main()

{
    // int arr[] = {1,2,2,3,3,3,4,4,4,4};
    // int freq[10] = {0}, n;
    // n = sizeof(arr)/sizeof(arr[0]);

    // for(int i = 0; i<n; i++) {
    //     freq[arr[i]]++;
    // }

    // for(int i =0; i<n; i++) {
    //     cout<< i << "-> " << freq[i] << endl;
    // }

    unordered_map<int, int>mpp;

    for(int i = 0; i<5; i++) {
        mpp[i] = i*2;
    }

    // for(auto ele:mpp) {
    //     cout << ele.first << "-> " << ele.second << endl;

    // }

    cout <<  mpp.find(4);



    return 0;
}