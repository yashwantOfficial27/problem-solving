#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "this is an amazing string";
    vector<string> str_vec;
    int i =0, begin = 0, end = 0;
    // trim(s);
    while(i < s.size()) {
        if (s[i] == ' ') {
            end = i-1; 

            str_vec.push_back(s.substr(begin, end));
            if ( i+1 < s.size()) 
                begin = i+1;

        }
        i++;
    }

    for(int i = str_vec.size()-1; i>= 0; i--) {
    // for(int i = 0; i< str_vec.size(); i++) {
        cout << str_vec[i] << " ";
    }

    // cout << s.substr(0,4);
    return 0; 
}