#include<bits/stdc++.h>
using namespace std;

int main()

{
    int arr[] = {2,5,1,3,9,6};
    int n = 6;
    for(int i = 0; i<n; i++) {
        int j = i;

        while(j>0 && arr[j-1] > arr[j]) { 
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--; 
        }
    }

    cout << "Sorted Array is : " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << '\t';
    }
    return 0;
}