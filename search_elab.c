#include <stdio.h>
int search(int arr[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if (x==arr[i])
        {
            printf("1");
            break;
        }
        else
        {
            printf("-1");
            break;
        }
    }return 0;
}
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