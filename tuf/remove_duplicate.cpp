#include<bits/stdc++.h>
using namespace std;

int main()

{
    vector<int> arr = {1,2,3,4,5};

    for(int i = 0; i<arr.size()-1; ) {
        if ( arr[i] == arr[i+1]) {
            arr.erase(arr.begin()+i+1);
        }
        else {
            i++;
        }
    }

    cout << "Unique array is : " << endl;
    for(auto ele:arr) {
        cout << ele << '\t';
    }
    return 0;
}