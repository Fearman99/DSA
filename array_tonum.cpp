#include <iostream>
#include <math.h>
using namespace std;

void singleno(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int d = 0;
        int ans = 0;
        d = arr[i] % 10;
        ans = (ans * 10) + d;
        cout << ans<<endl;
    }
}

void reverse_singleno(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int d = 0;
        int ans = 0;
        d = arr[i] % 10;
        ans = (d * pow(10, i)) + ans;
        cout << ans<<endl;
    }
}

int main()
{
    int arr[] = {1, 6, 7, 8};
    int n = 4;
    singleno(arr, n);
    reverse_singleno(arr, n);
    return 0;
}