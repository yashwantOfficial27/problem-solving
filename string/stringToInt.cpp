#include<bits/stdc++.h>
using namespace std;

std::string trim(const std::string& str) {
    auto start = std::find_if_not(str.begin(), str.end(), ::isspace);
    auto end   = std::find_if_not(str.rbegin(), str.rend(), ::isspace).base();
    return (start < end) ? std::string(start, end) : "";
}

int myAtoi(string s) {
    long long int ans = 0;
    bool isPositive = true;

    s = trim(s);
    
    if (s[0] == '-') {
        isPositive = false;
    }
    int i;
    isPositive == true ? i = 0 : i = 1;
    cout << s[i] << endl;
    while (s[i] != '\0' && (((int)s[i] >= (int)s[i] - 49 + 1 && (int)s[i] <= (int)s[i] - 49 + 10) || s[i] == '-') ) {
        ans *= 10;
        ans += (int)s[i] - 49 + 1;
        i++;
    }

    if (!isPositive) {
        ans *= -1;
    }
    
    return ans;
}

int main()
{
    
    string s = "   -042";
    string trimmed = trim(s);
    cout << myAtoi(trimmed);
    return 0;
}