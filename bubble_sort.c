#include <stdio.h>
int main()
{
    int a[10], n, t = 0;
    printf("enter size of array(1 to 10)\n");
    scanf("%d", &n);
    printf("\nenter elements of array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    printf("Entered array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");

    return 0;
}
