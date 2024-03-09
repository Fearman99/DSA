#include <iostream>
using namespace std;
int main()
{
    int i = 1;
   
    int n;

    cin >> n;

    while (i <= n)
    {
        int s = n - i;
        while (s)
        {
            cout << " ";
            s--;
        } int j = 1;
        while (j <= i)
        {
            cout << n-j+1;
            j++;
        }

        int start = i - 1;
        while (start)
        {
            cout <<j+n-1;
            start--;
        }

        cout << endl;
        i++;
    }
    return 0;
}
