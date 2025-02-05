#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int hash[] = {1,2,3,4,5,6,6,6,7,8,1,2,5,55,66};
    map<int, int> mp;
    for(int i = 0; i<15; i++) {
        mp[hash[i]]++;
    }

    for(auto ele: mp) {
        cout<< ele.first << " -> "  << ele.second << endl;
    }

    return 0;
}