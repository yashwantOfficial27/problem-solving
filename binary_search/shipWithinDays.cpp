#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> weight, int days, int limit) {
    int sum = 0, currDays = 0;
    for(int i = 0; i< weight.size(); i++) {
        if (sum + weight[i] <= limit ) {
            sum += weight[i];
        }
        else {
            currDays++;
            sum = weight[i];
        }
    }
    currDays++;
    return currDays <= days;
}

int shipWithinDays(vector<int> weights, int days) {
    int sum = 0;
    for(int i = 0; i<weights.size(); i++) {
        sum += weights[i];
    }
    int  mid, high = sum;
    int low = *max_element(weights.begin(), weights.end());;
    cout << "Value of low is :" << low << endl;
    while(low <= high) {
        mid = (low + high)/2;

        if(isPossible(weights, days, mid)) {
            high = mid - 1;
        }
        else {
            low = mid+1;
        }
    }
    
    return low;
}

int main()
{
    // vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    // int days = 5;
    // vector<int> weights = {3,2,2,4,1,4};
    // int days = 3;
    vector<int> weights = {1,2,3,1,1};
    int days = 4;
    cout <<  shipWithinDays(weights, days);
    return 0;
}