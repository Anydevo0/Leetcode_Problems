#include <iostream>
#include<math.h>
using namespace std;

int reverseInteger(int x)
{
    int digit = 0, ans = 0;
    while (x)
    {
        digit = x % 10;
        if( (ans > INT32_MAX/10) || (ans < INT32_MIN/10) )
            return 0;
        ans = ( ans * 10 ) + digit;
        x = x / 10;
    }
    return ans;
}

int main()
{
    int num;
    cout<<"Enter any number: ";
    cin >> num;
    int ans = reverseInteger(num);
    cout<<ans;

    return 0;
}