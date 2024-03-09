#include <stdio.h>
int search(int arr[],int n,int x)
{
    //int temp;
    for (int i = 0; i < n; i++)
    {
        if (x==arr[i])
        {
            printf("Elemet : %d %d",x,arr[i]);
        }
        /*else
        {
            temp = 0;
            return 0;
            break;
        }
    }return 0;*/
}}
int main()
{
    int n, arr[20],x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    search(arr, n, x);
    return 0;
}