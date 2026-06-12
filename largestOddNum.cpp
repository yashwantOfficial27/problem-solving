#include<bits/stdc++.h>
using namespace std;
   
int main()
{
    string s = "12322";
    // cout << s.substr(0,3 +1 );
    int n = s.size();
    int i;
    for ( i = s.size()-1; i>= 0; i-- ) {
        char ch = s[i];
        if (s[i] % 2 != 0 ) {
            break;
        }
    }
    
    cout << s.substr(0, i+1) << endl;
    
    
}

