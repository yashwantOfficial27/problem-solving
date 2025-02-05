// lowercase hashing
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int char_hash[26] = {0};
    string str = "abcdcdaczk";

    for(int i = 0; i<str.size(); i++) {
        char_hash[str[i] - 'a']++;
    }

    // for(int i = 0; i< 26; i++) {
    //     cout << char_hash[i] << "\t";
    // }

    int q;
    cin >> q;

    while(q--) {
        char c;
        cin >> c ;

        cout << char_hash[c - 'a'] << endl;
    }
    return 0;
}