#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n ; j++)
        {
            cout << j;

        }

        for (int p = 1;p<=i-1;p++){
            cout << p;
        }cout << endl;

           
    }}