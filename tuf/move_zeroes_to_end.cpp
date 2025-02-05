#include<bits/stdc++.h>
using namespace std;

int* swap(int arr[],int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return arr;
}

void moveZeroesToEnd(int arr[], int n){
    int i = 0, j = n-1;
    while(i<=j){
        if(arr[i] == 0) {
            if(arr[j] != 0) {
                arr = swap(arr,i,j);
                i++;
            }
            j--;
        }
        else{
            i++;
        }
      }

      cout << "Array is : " << endl;
      for(int i = 0; i<n; i++) {
        cout << arr[i] << '\t';
      }
}

void moveZeroesToEnd1(int arr[], int n) {
    int j = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 0) {
            j = i;
        }
    }

    // check if no zeroes found 
    if (j == -1) return;

    for(int i = j+1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i = 0; i<n; i++) {
        cout << arr[i] << '\t';
    }

    return;
}

int main()
{
    // vector<int> v1 = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1}; //1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
    // int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int arr[] = {1,2,0,1,0,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout << "Size of array is " << n << endl;
    // moveZeroesToEnd(arr, n);
    moveZeroesToEnd1(arr, n);
    return 0;
}