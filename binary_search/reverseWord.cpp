#include<bits/stdc++.h>
using namespace std;

std::string trim(std::string str) {
    str.erase(str.begin(), std::find_if(str.begin(), str.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    str.erase(std::find_if(str.rbegin(), str.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), str.end());

    return str;
}

string reverseWords(string s) {
    string temp, result;
    s = trim(s);
    vector<string> str_vec;
    int i =0, begin = 0, end = 0, len= 0;

    while(i < s.size()) {
        if (s[i] == ' ') {
            temp = s.substr(begin, len);
            str_vec.push_back(temp);
            if ( i+1 < s.size()) {
                begin = i+1;
            }
            len = 0; 

        }
        len++;
        i++;
    }
    end = s.size()-1;
    str_vec.push_back(s.substr(begin, end));
    for(int i = str_vec.size()-1; i >= 0 ; i--) {
        string test = trim(str_vec[i]) + " ";
        result += test;
    }  
    result = trim(result);
    return result;
}

int main()
{
    string s = "this is an amazing string", temp;
    cout << reverseWords(s);

    // cout << s.substr(0,4);
    return 0;
}