#include<bits/stdc++.h>
using namespace std;

void leftShiftByVector(vector<int>arr) {
    int temp = arr[0];
    arr.erase(arr.begin());
    arr.push_back(temp);

    for(auto ele:arr) {
        cout << ele << "\t";
    }
}

void leftShift(vector<int> arr,int k) {
    int l = 0;
    while(l<k) {
        int first_element = arr[0];
        int n = arr.size();

        for(int i=1; i<n; i++) {
            arr[i-1] = arr[i];
        }
        arr[n-1] = first_element;
        cout << endl;
        for (auto ele:arr) {
            cout << ele << '\t';
        }
        l++;
    }
}

void rightShiftByKElement(vector<int> arr, int k) {
    int n = arr.size(), i =0, l = 0;
    vector<int> copy;

    while (i<n) {
        if((i+k) < n) {
            copy[i+k] = arr[i];
        }
        else if((i+k) >= n) {
            copy[l] = arr[i];
            l++;
        }
        i++;
    }

    for(auto ele:copy) {
        cout << ele << '\t';
    }
}

void shiftByDistance1(vector<int> v1, int k) {
    int temp[k];
    int n = v1.size();
    for(int i = n-k, j=0; i<n; i++, j++) {
        temp[j] = v1[i];
    }

    for(int i = n-k-1; i>=0; i--) {
        v1[i+k] = v1[i];
    }
    for(int i = 0; i<k; i++) {
        v1[i] = temp[i];
    }

    for(auto ele:v1) {
        cout << ele << "\t";
    }
}

int main()

{
    vector<int> arr = {1,2,3,4,5,6,7};
    // leftShiftByVector(arr);
    // rightShiftByKElement(arr, 2);
    
    
    // leftShift(arr,2);
    shiftByDistance1(arr, 2);
    return 0;
}