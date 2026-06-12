#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    if (s.length() == 0) return 0;
    int depth = 0, maxDepth = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '('){
            depth++;
            maxDepth = max(depth, maxDepth);
        } else if(s[i] == ')') {
            depth--;
        }
    }
    return maxDepth;
}

int main()
{
    // string s = "()(())((()()))";
    // string s = "(1)+((2))+(((3)))";
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s);
    return 0;
}