#include <iostream>
using namespace std;

int maximum_ele(int a[], int n)
{
    int maxl = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxl)
        {
            maxl = a[i];
        }
    }
    cout << maxl;
}

int max_ele(int a[], int n)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, a[i]);
    }
    cout << maxi;
}

int main()
{
    int a[] = {1, 7, 56, 34, 3};
    // max(a,5);
    max_ele(a, 5);
    return 0;
}