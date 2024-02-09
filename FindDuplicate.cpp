// #include<iostream>
// using namespace std;

// int findDuplicate(int arr[], int size) {
//     int ans = 0;

//     for (int i=0; i<size; i++) {
//         ans = ans^arr[i];
//     }

//     for(int i=1; i<size; i++) {
//         ans = ans^i;
//     }
//     return ans;
// }

// int main() {

//     int arr1[5] = {1, 2, 2, 3, 5};

//     int n = findDuplicate(arr1, 5);
//     cout << "Duplicate :" << n;
    
//     return 0;
// }