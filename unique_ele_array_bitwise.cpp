#include <iostream>
using namespace std;

// int unique(int arr[],int n){
//     int t=0;
//     for(int i=0;i<n;i++){
//         t=t^arr[i];
//     }cout<<t;
// }

int unique(int arr[], int n)
{
    int c;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    } for(int j=0;j<n;j++){
                if(arr[j]>-1){
                    cout << arr[j];}
}
}

int main()
{
    int arr[] = {7, 5, 7, 2, 5};
    unique(arr, 5);
    return 0;
}