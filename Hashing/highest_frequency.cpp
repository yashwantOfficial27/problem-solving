#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[] = {10,5,10,15,10,5};
    // vector<int> v = {2,2,1,1,1,2,2} ;
    vector<int> v = {3,2,3} ;
    map<int, int> mp;

    for(int i = 0; i<v.size(); i++) {
        mp[v[i]]++;
    }

    for(auto ele:mp) {
        // cout << "inside the loop " << endl;
        if (ele.second > ((int)v.size()/2) ){
            // cout << "inside the if block " << endl;
            cout << ele.first;
        }
        // cout << ele.first << " -> " << ele.second << endl;
    }

    return -1;

    // vector<int> v1;
    // // for(int i = 0;i<v.size(); i++) {
    // //     v1.push_back(mp[i].second);
    // // }

    // for(auto ele:mp) {
    //     cout << ele.first << " -> " << ele.second << endl;
    // }

    // int maximum;
    // for(auto ele:mp) {
    //     // cout << ele.first << " -> " << ele.second << endl;
    //     v1.push_back(ele.second);
    //     maximum = *max_element(v1.begin(), v1.end());
    // }
    // int result;
    // for (auto ele:mp) {
    //     if (ele.second == maximum) {
    //         result = ele.first;
    //     }
        
    // }
    // cout << result << " -> "<<maximum << endl;


    // return 0;
}

// [2,2,1,1,1,2,2] -> 2


// vector<int> frequency = {0,0,0,0,0,0,0,0,0,0};
//         int nums_size = nums.size()/2, count = 0;
//         for( auto ele:nums) {
//             frequency[ele]+=1;
//         }
        
//         for(auto ele:frequency) {
//             if(ele > nums_size) {
//                 return count;
//                 break;
//             }
//             count++;        
//         }