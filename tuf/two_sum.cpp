#include<bits/stdc++.h>
using namespace std;

bool twoSum(vector<int> v1, int n, int k) {
    if  (n==0) return false;
    for(int i = 0; i<n; i++){
      for(int j = 0; j<n; j++) {
        if(i !=j && (v1[i]+v1[j])== k) {
          return true;
        }
      }
    }
    return false;
}

bool twoSum2(vector<int> v1, int n, int k) {
    sort(v1.begin(), v1.end());
    int i = 0, j = n-1;

    while(i<j) {
        if(v1[i] + v1[j] == k) {
            return true;
        }
        else if(v1[i] + v1[j] > k) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}

vector<int> twoSum4(vector<int> v1, int n, int k) {
    if (n == 0) return {-1,-1,};
    int remaingSum = 0;
    unordered_map<int, int> mpp;
    bool flag = false;

    for(int i = 0; i<n; i++) {
        int remaining = k - v1[i];

        if(mpp.find(remaining) != mpp.end()) {
            // cout <<  "Mil Gya!!" << endl;
            flag = true;
            break;
        }

        mpp[i] = v1[i];
    }

    if(flag) cout << "sum ho rha hai!!" << endl;
    else cout << "Nhi ho rha hai!!" << endl;
}

int main() {
    vector<int> v1 = {2,6,5,8,11};
    int n = v1.size(), k = 15;

    // int result = twoSum2(v1, n, k);
    // result == 1 ? cout << "True" :  cout << "False";

    twoSum4(v1, n, k);
    return 0;
}