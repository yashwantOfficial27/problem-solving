#include<bits/stdc++.h>
using namespace std;

void count(vector<int> v1, int n) {
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for(auto it:v1) {
        (it == 0) ? count_0++ : ((it == 1) ? count_1++ : count_2++);
    }

    for(int i = 0; i<n; i++) {
        if (count_0>0){
            v1[i] = 0;
            count_0--;
        }
        else if(count_1 > 0) {
            v1[i] = 1;
            count_1--;
        }
        else {
            v1[i] = 2;
            count_2--;
        }
    }

    for(auto it:v1) {
        cout << it << '\t';
    }
}

void arrange(vector<int> v1, int n) {
    if (n==0) return;
    int low = 0, mid = 0, high = n-1;
    while (mid <= high) {
        if( v1[mid] == 0) {
            swap(v1[mid], v1[low]);
            low++;
            mid++;
        }
        else if (v1[mid] == 1) {
            mid++;
        }
        else if(v1[mid] == 2) {
            swap(v1[mid], v1[high]);
            high--;
        }
    }

    for( auto it:v1) {
        cout << it << '\t';
    }
}

void arrange1(vector<int> arr, int n){
    if(n==0) return;
    int low = 0, mid = 0, high = n-1;

    while(mid <= high) {
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for( auto it:arr) {
        cout << it << '\t';
    }
    
}

int main()
{
    vector<int> v1 = {1,2,0,2,1,1,0,0,0};
    int n = v1.size();

    // count(v1, n);
    arrange1(v1, n);
        return 0;
}