#include<bits/stdc++.h>
using namespace std;

// int maxOfArray(vector<int> v) {
//     int maxEle = INT_MIN;

//     for(auto ele: v){
//         if (ele>maxEle) {
//             maxEle = ele;
//         }
//     }
//     return maxEle;
// }

// int findBouquet(vector<int> v, int m, int k, int mid) {
//     int f_cnt = 0, b_cnt = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         if(v[i] <= mid) {
//             f_cnt++;
//             if (f_cnt >= k) {
//                 b_cnt++;
//             }
//         }
//         else {
//             f_cnt = 0;
//         }
//     }

//     return b_cnt >= m ?  b_cnt : -1;
// }

// int rosesGarden(vector<int> v, int m, int k) {
//     int n = v.size();
//     int maxElement = maxOfArray(v);
//     int low = 0, high = maxElement,mid, flowerCnt = 0, bouquetCnt = 0;
//     while(low<=high) {
//         int mid = (low + high)/2;

//         int ans = findBouquet(v, m, k, mid);

//         // if (ans == -1) return -1;

//         if (ans == -1) {
//             low = mid+1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     return v[high];
// }

bool possible(vector<int> v, int day, int m, int k) {
    int cnt = 0, noOfB = 0;
    for(int i=0; i<v.size(); i++) {
        if (v[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt/k);
            cnt = 0;
        }
    }
    noOfB += (cnt/k);

    return noOfB >= m;
}

int rosesGarden(vector<int> v, int m, int k) {
    int n = v.size();
    long long val = m * 1ll * k * 1ll;
    if (n < m*k) return -1;
    int low, high, mid, mini = INT_MAX, maxi = INT_MIN;
    for(int i = 0; i<n; i++) {
        mini = min(mini, v[i]);
        maxi = max(maxi, v[i]);
    }
    low = mini;
    high = maxi;

    while(low<=high) {
        mid = (low + high)/2;
        if (possible(v, mid, m,k)) {
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
    int m = 2, k=3;
    vector<int> v = {7,7,7,7,13,11,12,7};
    // vector<int> v = {7,7,7,7,7,7,11,12};
    cout << rosesGarden(v, m, k);
    return 0;
}