#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char, int> freq;

    // Step 1: Count character frequencies
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Convert map to vector of pairs and sort by frequency
    vector<pair<char, int>> freqVec(freq.begin(), freq.end());
    sort(freqVec.begin(), freqVec.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    string result = "";
    for (auto &p : freqVec) {
        char ch = p.first;
        int count = p.second;
        result += string(count, ch);  // Repeat char 'count' times
    }

    return result;
}   

int main()
{
    string s = "tree";
    cout << frequencySort(s);
    return 0;
}
