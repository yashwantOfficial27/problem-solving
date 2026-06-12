#include<bits/stdc++.h>
using namespace std;

void recurPermute(int index, string &s, vector<string> &ans) {

    // Base Case
    if (index == s.size()) {
        ans.push_back(s);
        return;
    }

    // Swap the current index with all possible indices and recur
    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        recurPermute(index + 1, s, ans);
        swap(s[index], s[i]);
    }
}

// Function to find all unique permutations
vector<string> findPermutation(string &s) {
// Stores the final answer
    vector<string> ans;
    recurPermute(0, s, ans);
    // sort the resultant vector
    sort(ans.begin(), ans.end());

    return ans;
}

int countOccurenceOfAnagram(vector<string> anagramList, string str, int k) {
    if (anagramList.size() == 0) return -1;

    int count = 0, i = 0, j = 0;
    string s = "";
    while(j < str.length()) {
        s += str[j];
        if ( j - i + 1 < k) {
            j++;
        } 
        else if ( j - i + 1 == k) {
            auto it = find(anagramList.begin(), anagramList.end(), s);
            if (it != anagramList.end()) {
                count++;
            }
            j++;
            s = s.substr(1,s.length());
            i++;
        }
    }
    return count;
}

int countAnagramOccurrences(string str, string pattern) {
    int n = str.size(), k = pattern.size();
    unordered_map<char, int> patMap, windowMap;

    // Build pattern frequency map
    for (char c : pattern) patMap[c]++;

    int count = 0, match = 0;

    // First window
    for (int i = 0; i < k; i++) {
        windowMap[str[i]]++;
    }

    if (windowMap == patMap) count++;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowMap[str[i]]++;                // include next char
        windowMap[str[i - k]]--;            // remove old char

        if (windowMap[str[i - k]] == 0) {
            windowMap.erase(str[i - k]);    // clean up zero count keys
        }

        if (windowMap == patMap) count++;
    }

    return count;
}


int main()
{
    string s = "forxxorfxdofr", findAnagramOf = "for";
    int k = 3;
    // vector<string> anagramList = findPermutation(findAnagramOf);
    // cout << countOccurenceOfAnagram(anagramList, s, findAnagramOf.length());
    cout << countAnagramOccurrences(s, findAnagramOf);
    return 0;
}