#include<iostream>
#include<math.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void bubbleSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        for(int j=0; j<size-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    // int n;
    // cout<<"Enter the size of an array: ";
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++) {
    //     cin>>arr[i];
    // }cout<<endl;
    int arr[5] = {3, 5, 4, 2, 0};
    bubbleSort(arr, 5);
    printArray(arr, 5);

    return 0;
}