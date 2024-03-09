#include <iostream>
using namespace std;
int main()
{
    int count = 1, i = 1, n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            //cout << count;
            //count++;
            cout<<n-j+1;
            j++;
        }
        cout << endl;
        i++;
    }return 0;
}