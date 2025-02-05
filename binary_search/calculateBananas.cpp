#include<bits/stdc++.h>
using namespace std;

int bananasEaten(int bananaEaten, int n, vector<int> v) {
    int sum = 0;
    for(int i = 0; i<n; i++) { 
        // cout << "banana eaten : " << bananaEaten << " v[i] is " << v[i] << " = ceil " <<  ceil(v[i]/bananaEaten) << endl;
        sum += ceil((double)(v[i]) / (double)(bananaEaten));
    }
    // cout << "BananaEaten " << bananaEaten << " and sum is " << sum << endl;
    return sum;
}

int findMaxInArray(vector<int> v, int n) {
    int highestElement = INT_MIN;
    if (n == 0) return -1;

    vector<int> temp = v;
    sort(temp.begin(), temp.end()); 
    highestElement = temp[n-1];
    // cout << "Max is : " << highestElement << endl;
    return highestElement;
}

int calculateBananaEatenPerHour(int n, int h, vector<int> v) {
    int sum = 0;
    int low = 1, high, mid;
    high = findMaxInArray(v, n);

    // cout << "highest element is " << high << endl;

    if (high == -1) return -1;
    // cout << "Value of high is " << high << endl;
    while(low <= high) {
        mid = (low + high)/2;
        sum = bananasEaten(mid, n, v);
        if (sum<=h) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    return low;
}

int main()
{
    // int n = 4, h = 8;
    int n = 5, h = 5;
    // vector<int> v = {7, 15, 6, 3};
    vector<int> v = {25, 12, 8, 14, 19};
    cout << "Final output is : " << calculateBananaEatenPerHour(n, h, v);
    return 0;
}