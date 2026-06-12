#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int i = s.length()-1, j = s.length()-1;
    string result = "";
    int count = 0;

    while(j >= 0) {
        string str = "";
        if (s[j] == ' ') {
            result += s.substr(j+1, i-j) + " ";
            i = j - 1;
        }
        j--;
    }
    result += s.substr(0,i+1);
    return result;
}

int main()
{
    string s = "welcome to the jungle";
    cout << reverseWords(s);

    // cout << s.substr(11, 2);
    return 0;
}