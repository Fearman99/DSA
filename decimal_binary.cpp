#include <iostream>
#include <math.h>
using namespace std;

int decimal_to_binary(int n)
{
}

int main()
{
    int n;
    cin >> n;
    // decimal_to_binary(n);
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n&1;
        cout << bit << endl;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;

    return 0;
}