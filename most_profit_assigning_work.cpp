#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sortVector(difficulty, profit);
        sort(worker.begin(), worker.end());
        int maxProfit = 0;
        int i = 0, j = 0, k = 0;
        while(i<worker.size() && j < difficulty.size()) {

            if( worker[i] >= difficulty[j]){
                cout << "Profit is : " << profit[k] << endl;
                maxProfit += profit[k];
                i++;
            }
            else {
                j++;
                k++;
            }
        }

        return maxProfit;
    }

    void sortVector(vector<int>& difficulty, vector<int>& profit){
        for(int i = 0; i<difficulty.size()-1; i++){
            for(int j = i+1; j < difficulty.size(); j++) {
                if ( difficulty[j] <= difficulty[i]) {
                    swap(difficulty[i], difficulty[j]);
                    swap(profit[i], profit[j]);
                }
            }
        }
    }
};

int main(){
    // vector<int> worker={4,5,6,7};
    vector<int> worker={25,25,40};
    // vector<int> difficulty = {2,4,6,8,10};
    // vector<int> difficulty = {2,5,3,1};
    vector<int> difficulty = {47,57,85};

    // vector<int> profit={10,20,30,40,50};
    // vector<int> profit={2,5,3,1};
    vector<int> profit={66,99,24};
    Solution s1;
    int ans = s1.maxProfitAssignment(difficulty, profit, worker);
    cout << "Answer is : " << ans << endl;
    return 0;
}

// difficulty = [2,4,6,8,10], profit = [10,20,30,40,50], worker = [4,5,6,7]

// cout << "Profit is " << endl;
// for(auto ele:profit){
//         cout << ele << "\t";
//}