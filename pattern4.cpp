#include <iostream>
using namespace std;
int main()
{
    int count = 1, i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout <<" ";
            j++;
        }
        int s = n-i;

        while (s)
        {
            cout <<n-j ;
            s--;
        }
        cout << endl;
        i++;
    }return 0;
}