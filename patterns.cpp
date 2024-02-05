#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the input :" << endl;
    cin>>n;

    int row = 1;
    while(row<=n) {
        int count = 1;
        int col_1 = n - row + 1;
        while(col_1) {
            cout<<count;
            count++;
            col_1--;
        }
        int star = (row - 1) * 2;
        while(star) {
            cout<<"*";
            star--;
        }
        int col_3 = n - row + 1;
        while(col_3) {
            cout<<col_3;
            col_3--;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}