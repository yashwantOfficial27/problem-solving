#include<bits/stdc++.h>
using namespace std;
bool cmp(const std::string lhs, const std::string rhs) {
    return lhs.length() < rhs.length();
}

string longestCommonPrefix(vector<string> s) {
    sort(s.begin(), s.end());
    string s1 = s[0];
    string s2 = s[s.size()-1];
    int idx = 0;

    while(idx < s1.length() && idx < s2.length()) {
        if (s1[idx] == s2[idx]) {
            idx++;
        }
        else {
            break;
        }
    }
    return s1.substr(0, idx);
}
int main()
{
    vector<string> s = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(s);
    return 0;
}

