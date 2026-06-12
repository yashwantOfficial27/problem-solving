#include<bits/stdc++.h>
using namespace std;

int atoiHelper(string s, int idx, int result) {
    // base case
    if (idx == s.size()) return result;

    char c = s[idx];
    if (!isdigit(s[idx])) return result;
    int digit = s[idx] - '0';
    return atoiHelper(s, idx+1, result*10+digit);
}

int myAtoi(string s) {    
    int result = 0;
    int i = 0, sign = 1;

    // skip whitespaces
    while (i < s.size() && s[i] == ' ' ) i++;

    // handle sign
    if ( i < s.size() && (s[i] == '+' || s[i] == '-')) {
        sign = s[i] == '-' ? -1 : 1;
        i++;
    }

    result = atoiHelper(s,i,result);

    return result * sign;
}

int main()
{
    string s = "1234";
    cout << myAtoi(s);
    return 0;
}