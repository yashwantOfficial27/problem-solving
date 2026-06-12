#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;
    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if (s == t) {
        return true;
    }
    return false;
}

int main()
{
    string s = "anagram", t = "nagaram";
    cout << isAnagram(s,t);
    return 0;
}