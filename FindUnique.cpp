#include<iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0;

    for(int i=0; i<size; i++) {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main() {

    int arr[5] = {2, 2, 1, 3, 1};

    int ans = findUnique(arr, 5);
    cout<<"Unique num is: "<<ans;

    return 0;
}