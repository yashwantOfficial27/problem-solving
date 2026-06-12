#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "35427";
    int max_ele = INT_MIN;

    for (int i = 0; i< s.size()-1; i++) {
        string str = "";
        str += s[i];
        for( int j = 1; j<s.size(); j++) {
            str += s[j];
            int num = stoi(str) % 2 == 0 ? 0 : stoi(str);
            max_ele = max(max_ele, num);
            // max_ele = max(max_ele, (int(s[i]) - 48 ) % 2 != 0 ? (int(s[i]) - 48 ) : 0);
        }
    }
    
    // max_ele = max(max_ele, (int(s[i]) - 48 ) % 2 != 0 ? (int(s[i]) - 48 ) : 0);
    cout << max_ele;
    // return 0;
}

