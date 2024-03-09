#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int dig = 0;
    while (num > 0)
    {int ans = 0;
        ans = num % 10;
        dig = (dig * 10) + ans;
        num=num / 10;
    }cout << dig;
}