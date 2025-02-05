#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> frequency = {0,0,0,0,0,0,0,0,0,0};
        int nums_size = nums.size()/2, count = 0;
        for( auto ele:nums) {
            frequency[ele]+=1;
        }
        
        for(auto ele:frequency) {
            if(ele > nums_size) {
                return count;
                break;
            }
            count++;        
        }
    }
};

int main(){
    Solution s1;
    // vector<int> nums = {2,2,1,1,1,2,2};
    vector<int> nums = {3,2,3};
    s1.majorityElement(nums);
    return 0;
}