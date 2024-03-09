#include <iostream>
using namespace std;

int maxi(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max = arr[i];
        }
        
    }
   cout<< max;
}



    int main()
    {
        int arr[] = {0, 1, 2, 3, 41, 51};
        maxi(arr, 6);
        
        return 0;
    }