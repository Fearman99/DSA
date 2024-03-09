#include <iostream>
using namespace std;

int SecondLargest(int arr[], int n)
{
    int max = arr[0];
    int max2 = -1;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
   
    for (int i = 0; i <= n; i++)
    {
        if ( arr[i] > max2 && arr[i]!= max)
        {
            max2 = arr[i];
        }
    }
    cout << max2;
}

int main()
{
   
    
        int arr[5] = {1, 2, 3, 4, 5};
        int n = 5;
        SecondLargest(arr, n);
    
}
