#include<bits/stdc++.h>
using namespace std;

int main()

{
    int arr[] = {2,5,1,3,9,6};
    for(int i = 0; i<5; i++) {
        for(int j = i+1; j<6; j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted array is : " << endl;
    for(int i = 0; i<6; i++) {
        cout << arr[i] << '\t';
    }
    return 0;
}