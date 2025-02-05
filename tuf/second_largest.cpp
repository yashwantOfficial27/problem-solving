#include<bits/stdc++.h>
using namespace std;

int findSecondMax(vector<int> arr) {
    if(arr.size() < 2) return -1;
    int max = *max_element(arr.begin(), arr.end());
    int second_max = INT_MIN;
    for(auto ele:arr) {
        if(second_max < ele && ele != max) {
            second_max = ele;
        }
    }
    
    return second_max;
}

int findSecondMaxBestApproach(vector<int> arr) {
    if (arr.size() < 2) return -1;
    int max = INT_MIN, second_max = INT_MIN;
    for(int i = 0; i< arr.size(); i++) {
        if ( arr[i] > max ) {
            second_max = max;
            max = arr[i];
        }
        else if(arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    return second_max;
}

int main()
{
    vector<int> arr = {1, 5, 4, 7, 7, 2};
    // cout << findSecondMax(arr);
    cout << findSecondMaxBestApproach(arr);

    return 0;
}