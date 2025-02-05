#include<bits/stdc++.h>
using namespace std;

bool stringPalindrome(string str, int start, int end) {
    // if(start <= end) {
    //     if (str[start] == str[end]) {
    //        stringPalindrome(str, start+1, end-1);
    //     }
    // }

    if (start > end) return true;

    if (str[start] == str[end]) {
           return stringPalindrome(str, start+1, end-1);
    }
    else {
        return false;
    }
    
}
int main()
{
    bool result;
    string str = "madam";
    result = stringPalindrome(str, 0, str.length()-1);
    cout << "output is  : " << result << endl;
    return 0;
}