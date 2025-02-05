#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> v) {
    int n = v.size();
    if (v.size() <= 0) return -1;
    int low = 0, high = v.size()-1, mid, ans = INT_MAX, idx = -1;
    while(low < high) {
        mid  = low + (high-low)/2;
        if(v[low] <= v[mid]) {
            if (ans > v[low]) {
                ans =  v[low];
                idx = low;
            }
            low = mid +1;
        }
        else {
            if (ans >  v[mid]) {
                ans = v[mid];
                idx = mid;
            }

            high = mid - 1;
        }
    }
    return idx+1;
}

int main()
{
    vector<int> v = {4,5,6,7,8,9,1,2,3};
    // vector<int> v = {39, 6, 11, 14, 18, 36, 37, 38};
    cout << findKRotation(v) << endl;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// void findMinimumElementInRotatedBS(vector<int> v) {
//     if (v.size() <= 0) return;
//     int low = 0, high = v.size()-1, mid, ans = INT_MAX, idx = -1;
//     while(low <= high) {
//         mid = (low+high)/2;
//         if(v[low] <= v[mid]) {
//             // ans = min(v[low], ans);
//             if (ans > v[low]) {
//                 ans = v[low];
//                 idx = low;
//             }
//             low = mid + 1;
//         }
//         else {
//             // ans = min(v[mid], ans);
//             if (ans > v[mid]) {
//                 ans = v[mid];
//                 idx = mid;
//             }
//             high = mid - 1;
//         }
//     }
//     cout <<"Lowerst element is : " << ans <<endl;
//     cout <<"Lowerst element index : " << idx <<endl;
// }

// int main()
// {
//     // vector<int> v = {4,5,61,2,3};
//     vector<int> v = {4,5,6,7,8,9,1,2,3};
//     findMinimumElementInRotatedBS(v);
//     return 0;
// }
