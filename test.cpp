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

    // unordered_map<int, int>mpp;

    // for(int i = 0; i<5; i++) {
    //     mpp[i] = i*2;
    // }

    // // for(auto ele:mpp) {
    // //     cout << ele.first << "-> " << ele.second << endl;

    // // }

    // cout <<  mpp.find(4);

    long long int l =  stoll("7542351161");
    cout << l;


    return 0;
}

class Solution {
    public:
        string largestOddNumber(string s) {
        int max_ele = INT_MIN;
    
        for (int i = 0; i< s.size(); i++) {
            max_ele = max(max_ele, (int(s[i]) - 48 ) % 2 != 0 ? (int(s[i]) - 48 ) : 0);
        }
    
        for (int i = 0; i< s.size()-1; i++) {
            string str = "";
            str += s[i];
            for( int j = i+1; j<s.size(); j++) {
                str += s[j];
                int num = stoi(str) % 2 == 0 ? 0 : stoi(str);
                max_ele = max(max_ele, num);
            }
        }
        return max_ele != 0 ? to_string(max_ele) : "";
        }
    };