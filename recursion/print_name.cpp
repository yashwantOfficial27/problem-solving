#include<bits/stdc++.h>
using namespace std;

int printName(string name,int n) {
    // int len;
    // string str = to_string(n);
    // len = str.length();
    // len = (int)(log10(n) + 1);

    // return len;
    if(n<=0) return 0;
    printName(name, n-1);
    cout << name << "\t" << n << "\n";
}

int main(){
    // int n ,result;
    // cin >> n;
    printName("vineet",5);
    // cout << "Ans is : " << result;
    return 0;
}

// vineet 5
// vineet 4
// vineet 3
// vineet 2
// vineet 1


