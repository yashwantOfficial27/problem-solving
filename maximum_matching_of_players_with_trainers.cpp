#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int playerSize = players.size();
        int trainerSize = trainers.size();
        int i = 0, j = 0, count = 0;
        while(i<playerSize && j<trainerSize){
            if(players[i] <= trainers[j]){
                count++;
                i++; j++;
            }
            else if( players[i] > trainers[j] ) {
                j++;
            }
            else{
                i++;
            }
        }
        return count;
    }
};

int main(){
    Solution s1;
    // vector<int> players = {4,7,9}, trainers = {8,2,5,8};
    vector<int> players = {1,1,1}, trainers = {10};
    int count = s1.matchPlayersAndTrainers(players, trainers);
    cout<< "Answer is : " << count << endl;
    return 0;
}

// players = [4,7,9], trainers = [8,2,5,8]
