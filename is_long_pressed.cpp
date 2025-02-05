#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        while (i<name.size()-1 && j< typed.size()-1){
            if(name[i] == typed[j]) {       // vtkgn   i=3
                j++;                        // vttkgnn  j=3
            }
            else{
                i++;
            } 
        }
        // cout << "last letter of name is : " << name[i] << endl;
        // while (j < typed.size()) {
        //     if (typed[j] == name[i]) {
        //         j++;
        //     }
        //     else{
        //         return false;
        //     }
        // }
        cout << "value of i is : "<< i << " and value of j is : " << j << " size of name is : " << name.size() << " size of typed is : " << typed.size() << endl;
        if (i+1==name.size()-1 && j == typed.size()-1) {
            // cout<< "returned true" << endl;
            return true;
        }
        else {
            return false;
        }
    }
};

int main() {
    Solution s1;
    // bool ans = s1.isLongPressedName("alex", "aaleex");
    bool ans = s1.isLongPressedName("vtkgn", "vttkgnn");
    cout << "Ans is : " << ans << endl;
    return 0;
}