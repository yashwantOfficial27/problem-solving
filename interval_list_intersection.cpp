#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> result;
        int i = 0,j = 0;
        int m = firstList.size();
        int n = secondList.size();
        
        while (i<m && j<n){
            int ele1 = firstList[i][0];
            int ele2 = secondList[j][0];
            int ele3 = firstList[i][1];
            int ele4 = secondList[j][1];

            int firstElement = max(ele1, ele2);
            int secondElement = min(ele3, ele4);

            if(firstElement<=secondElement &&  secondElement == ele3){
                result.push_back({firstElement, secondElement});
                i++;
                // j++;
            }
            else if(firstElement<=secondElement && secondElement == ele4){
                result.push_back({firstElement, secondElement});
                j++;
            }
            else if(firstElement > secondElement && secondElement == ele4) {
                j++;
            }
            else if(firstElement > secondElement && secondElement == ele3){
                i--;
            }
        }
        return result;
    }
};

int main(){ 
    vector<vector<int>> result;
    vector<vector<int>> firstList = {{0,2},{5,10},{13,23},{24,25}};
    vector<vector<int>> secondList = {{1,5},{8,12},{15,24},{25,26}};

    // [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]

    Solution s1;
    result = s1.intervalIntersection(firstList, secondList); 
    for(auto ele: result){
        cout<< "{"<<ele[0] <<", "<< ele[1]<<" }"<<endl;
    }
}

// firstList = {{0,2},{5,10},{13,23},{24,25}}, secondList = {{1,5},{8,12},{15,24},{25,26}}