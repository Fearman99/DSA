#include <iostream>
using namespace std;
int main()
{
    int count = 1, i = 1, k = 1, n;
    cin >> n;
    while (i <= n)
    {
        int space = n - i;
        int j = 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (j <= i)
        {
            cout << "+";
            j++;
        }
        int start = i - 1;
        while (start)
        {
            cout << "+";
            start--;
        }

        cout << endl;
        i++;
    }
}