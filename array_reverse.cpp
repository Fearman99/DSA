#include<iostream>
using namespace std;

// void arr_rev(int a[],int n){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(a[start],a[end]);
//         start++;
//         end--;        
//     }
// }



// int main(){
//     int n=5;
//     int a[] = {1, 7, 56, 34, 3};
//     // max(a,5);
//     arr_rev(a,n);
//     for(int i=0; i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

void reverseArray(int arr[] , int m)
{
    int start = m;
    int end = m-1 ;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }for(int i=0; i<10;i++){
            cout<<arr[i]<<" ";
}

int main()
{
    int arr[10]={1,2,3,6,8,9,7};
    reverseArray(arr,3);
    
        }
    return 0;
}