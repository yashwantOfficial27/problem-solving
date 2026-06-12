#include<bits/stdc++.h>
using namespace std;

bool rotateString(string s, string goal) {
    if (s.length() != goal.length()) {
        return false;
    }

    for(int i = 0; i<s.length(); i++) {
        if (s != goal) {
            char firstChar = s[0];
            s = s.substr(1) + firstChar;
        }
        else 
            return true;
    }
    return false;
}

int main()
{
    string s = "abcde", goal = "cdeab";
    // string s = "defdefdefabcabc", goal = "defdefabcabcdef";
    bool output = rotateString(s, goal);
    if (output)
        cout << "String are same" << endl;
    else 
        cout << "String are not same " << endl;

    return 0;
}


// defdefdefabcabc
// defdefabcabcdef